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
				/*如果global_data::plant_data_processing_prepare == true && global_data::zombie_data_processing_prepare == true时先				thread_data::data_processing_condition.notify_all();了,就会notify_all失败,可能要等一下std::this_thread::sleep_for(std::chrono::milliseconds(2));,但是,global_data::plant_data_processing_prepare == true && global_data::zombie_data_processing_prepare == true还是为true,又会notify_all()直到两个线程醒来改变,所以不用等一下
				*/
				while (global_data::plant_data_processing_prepare == true && global_data::zombie_data_processing_prepare == true)
					thread_data::data_processing_condition.notify_all();


				std::unique_lock<std::mutex> lock(thread_data::global_mutex);
				//尽管理论上有可能死锁,比如上面两个线程超过这里wait前notify_all,但是越到后面,项目规模越不可能,x = 比如上面两个线程超过这里wait前notify_all的机率 lim 项目规模值 -> 中型项目规模 x = 0;乐
				global_data::management_prepare = true;
				thread_data::global_mutex_condition.wait(lock);
				global_data::management_prepare = false;
				//data处理完成
				global_data::data_processing_run = false;
				//到rendering处理
				global_data::rendering_run = true;
			}

			//和上面差不多
			//if (global_data::rendering_run == true) 
			{
				while (global_data::plant_rendering_prepare == true && global_data::zombie_rendering_prepare == true) 
					thread_data::rendering_condition.notify_all();


				std::unique_lock<std::mutex> lock(thread_data::global_mutex);
				global_data::management_prepare = true;
				thread_data::global_mutex_condition.wait(lock);
				global_data::management_prepare = false;
				//rendering处理完成
				global_data::rendering_run = false;
				//到data处理
				global_data::data_processing_run = true;
			}
		}
	}
}