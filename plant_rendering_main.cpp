#include "plant_rendering_main.h"
#include <iostream>
#include "global_data.h"
#include "plant_data.h"
#include "data/plant/plant_resources.h"
#include "bullet_data.h"
#include "bullet_resources_management.h"
#include "plant_resources_management.h"


namespace plant_rendering {
	void plant_rendering_main() {
		thread_management::plant_rendering();




		while (global_data::is_exti == false) {

			{
				std::unique_lock<std::mutex> lock(thread_data::rendering);
				global_data::plant_rendering_prepare = true;
				thread_data::rendering_condition.wait(lock);
				global_data::plant_rendering_prepare = false;


			}




			{
				//使用const plant_attributes*,只是读一下,放在这里提高性能,防止多次构造,为什么不用智能指针?,想死了把你,释放怎么办
				const plant_attributes* attributes = nullptr;
				const plant_state* state = nullptr;
				const plant_id* id = nullptr;
				const coordinates* coordinates = nullptr;
				for (const auto& index_line : plant_data::plant_data)
					for (const auto& index_column : index_line) {

						attributes = &(index_column.get()->get_objects().get()->get_attributes());
						state = &(*attributes).get_state();
						id = &(*attributes).get_id();
						coordinates = &(*attributes).get_location();

						plant_resources_management::rendering(*id, *coordinates, *state);
					}
			}

			{
				const bullet_attributes* attributes = nullptr;
				const bullet_state* state = nullptr;
				const bullet_id* id = nullptr;
				const coordinates* coordinates = nullptr;
				for (const auto& index_line : bullet_data::bullet_data)
					for (const auto& index_column : index_line) {

						attributes = &(index_column.get()->get_attributes());
						state = &(*attributes).get_state();
						id = &(*attributes).get_id();
						coordinates = &(*attributes).get_location();

						bullet_resources_management::rendering(*id, *coordinates, *state);
					}
			}
			//std::unique_lock<std::mutex> lock(thread_data::);
			std::cout << "plant rendering" << std::endl;




			thread_management::rendering_synchronization();

			if (global_data::is_exti == true)
				break;
		}


		thread_data::work_completed_thread++;
	}

}