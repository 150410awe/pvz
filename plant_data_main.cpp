#include "plant_data_main.h"
#include <iostream>
#include "global_data.h"

namespace plant_data {
	void plant_data_main() {
		thread_management::plant_data();
		while (true) {

			{
				std::unique_lock<std::mutex> lock(thread_data::data_processing);
				global_data::plant_data_processing_prepare = true;
				thread_data::data_processing_condition.wait(lock);
				global_data::plant_data_processing_prepare = false;
				std::this_thread::sleep_for(std::chrono::milliseconds(2));
			}

			std::cout << "plant_data_main" << std::endl;




			thread_management::data_processing_synchronization();


		}
	}

}