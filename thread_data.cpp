#include "thread_data.h"
#include "gui_main.h"
#include "management_main.h"
#include "plant_data_main.h"
#include "zombie_data_main.h"
#include "zombie_rendering_main.h"
#include "plant_rendering_main.h"


namespace thread_data {
	std::thread zombie_rendering_thread = std::thread(&zombie_rendering::zombie_rendering_main);
	std::thread zombie_data_processing_thread = std::thread(&zombie_data::zombie_data_main);
	std::thread plant_rendering_thread = std::thread(&plant_rendering::plant_rendering_main);
	std::thread plant_data_processing_thread = std::thread(&plant_data::plant_data_main);
	std::thread management_thread = std::thread(&management::management_main);

	/*
	* 感觉看着好像没用,但是不能删,不然thread_management里判断线程是否对应,有问题
	*/

	std::thread::id gui_id = std::thread::id();
	std::thread::id zombie_rendering_id = zombie_rendering_thread.get_id();
	std::thread::id zombie_data_processing_id = zombie_data_processing_thread.get_id();
	std::thread::id plant_rendering_id = plant_rendering_thread.get_id();
	std::thread::id plant_data_processing_id = plant_data_processing_thread.get_id();
	std::thread::id management_id = management_thread.get_id();


}