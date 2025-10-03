#include "zombie_data_main.h"
#include <iostream>
#include "global_data.h"

namespace zombie_data {
	void zombie_data_main() {
		thread_management::zombie_data();


		while (global_data::is_exti == false) {

			{
				std::unique_lock<std::mutex> lock(thread_data::data_processing);
				global_data::zombie_data_processing_prepare = true;
				thread_data::data_processing_condition.wait(lock);
				global_data::zombie_data_processing_prepare = false;

			}

			std::cout << "zombie_data" << std::endl;




			thread_management::data_processing_synchronization();


			if (global_data::is_exti == true)
				break;
		}


		thread_data::work_completed_thread++;
	}

}