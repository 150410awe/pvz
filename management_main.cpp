#include "management_main.h"
#include "plant_rendering_main.h"
#include "plant_data_main.h"
#include "zombie_rendering_main.h"
#include "zombie_data_main.h"
#include "global_data.h"

namespace management {
	void management_main() {
		thread_management::management();

		global_data::data_processing_run = true;
		global_data::management_prepare = false;

		while (true) {
			
			if (global_data::is_games == false) {
				std::unique_lock<std::mutex> lock(thread_data::global_mutex);
				thread_data::global_mutex_condition.wait(lock);
			}

			//if (global_data::data_processing_run == true) 
			{
				/*���global_data::plant_data_processing_prepare == true && global_data::zombie_data_processing_prepare == trueʱ��				thread_data::data_processing_condition.notify_all();��,�ͻ�notify_allʧ��,����Ҫ��һ��std::this_thread::sleep_for(std::chrono::milliseconds(2));,����,global_data::plant_data_processing_prepare == true && global_data::zombie_data_processing_prepare == true����Ϊtrue,�ֻ�notify_all()ֱ�������߳������ı�,���Բ��õ�һ��
				*/
				while (global_data::plant_data_processing_prepare == true && global_data::zombie_data_processing_prepare == true)
					thread_data::data_processing_condition.notify_all();


				std::unique_lock<std::mutex> lock(thread_data::global_mutex);
				//�����������п�������,�������������̳߳�������waitǰnotify_all,����Խ������,��Ŀ��ģԽ������,x = �������������̳߳�������waitǰnotify_all�Ļ��� lim ��Ŀ��ģֵ -> ������Ŀ��ģ x = 0;��
				global_data::management_prepare = true;
				thread_data::global_mutex_condition.wait(lock);
				global_data::management_prepare = false;
				//data�������
				global_data::data_processing_run = false;
				//��rendering����
				global_data::rendering_run = true;
			}

			//��������
			//if (global_data::rendering_run == true) 
			{
				while (global_data::plant_rendering_prepare == true && global_data::zombie_rendering_prepare == true) 
					thread_data::rendering_condition.notify_all();


				std::unique_lock<std::mutex> lock(thread_data::global_mutex);
				global_data::management_prepare = true;
				thread_data::global_mutex_condition.wait(lock);
				global_data::management_prepare = false;
				//rendering�������
				global_data::rendering_run = false;
				//��data����
				global_data::data_processing_run = true;
			}
		}
	}
}