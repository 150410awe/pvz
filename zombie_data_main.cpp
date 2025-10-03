#include "zombie_data_main.h"
#include <iostream>
#include "global_data.h"

namespace zombie_data {
	void zombie_data_main() {
		thread_management::zombie_data();


		while (true) {

			{
				std::unique_lock<std::mutex> lock(thread_data::data_processing);
				global_data::zombie_data_processing_prepare = true;
				thread_data::data_processing_condition.wait(lock);
				global_data::zombie_data_processing_prepare = false;
				std::this_thread::sleep_for(std::chrono::milliseconds(2));
			}

			std::cout << "zombie_data" << std::endl;




			thread_management::data_processing_synchronization();

		}
	}

}