#include "zombie_rendering_main.h"
#include <iostream>
#include "global_data.h"
#include "data/zombie/zombie_resources.h"
#include "zombie_data.h"
#include "zombie_resources_management.h"



namespace zombie_rendering {
	void zombie_rendering_main() {
		thread_management::zombie_rendering();



		while (global_data::is_exti == false) {

			{
				std::unique_lock<std::mutex> lock(thread_data::rendering);
				global_data::zombie_rendering_prepare = true;
				thread_data::rendering_condition.wait(lock);
				global_data::zombie_rendering_prepare = false;


			}



			{

				const zombie_attributes* attributes = nullptr;
				const zombie_state* state = nullptr;
				const zombie_id* id = nullptr;
				const coordinates* coordinates = nullptr;
				for (const auto& index_line : zombie_data::zombie_data)
					for (const auto& index_column : index_line) {

						attributes = &(index_column.get()->get_attributes());
						state = &((*attributes).get_state());
						id = &((*attributes).get_id());
						coordinates = &((*attributes).get_coordinates());

						zombie_resources_management::rendering(*id, *coordinates, *state);
					}
			}








			//std::unique_lock<std::mutex> lock(thread_data::);
			std::cout << "zombie_rendering" << std::endl;



			thread_management::rendering_synchronization();


			if (global_data::is_exti == true)
				break;
		}



		thread_data::work_completed_thread++;
	}

}