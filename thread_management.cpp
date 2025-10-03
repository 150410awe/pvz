#include "thread_management.h"
#include <iostream>
#include "global_data.h"


namespace thread_management {
	/*
	* @brief 判断线程是否对应
	*/
	namespace {
		void thread_determination(std::thread::id& goals) {
			if (goals != std::this_thread::get_id())
				throw std::runtime_error("Not the corresponding thread to run");
		}
	}

	void initialization() {
		thread_data::gui_id = std::this_thread::get_id();
	}

	void gui() {
		thread_determination(thread_data::gui_id);
	}

	void zombie_data() {
		thread_determination(thread_data::zombie_data_processing_id);
	}

	void zombie_rendering() {
		thread_determination(thread_data::zombie_rendering_id);
	}

	void plant_data() {
		thread_determination(thread_data::plant_data_processing_id);
	}

	void plant_rendering() {
		thread_determination(thread_data::plant_rendering_id);
	}

	void management() {
		//thread_determination(thread_data::management_id);
	}

	void data_processing_synchronization() {
		thread_data::data_processing.lock();
		thread_data::rendering_thread_complete++;
		if (thread_data::rendering_thread_complete == thread_data::data_processing_thread) {
			//最后一个线程notify_one()
			thread_data::rendering_thread_complete = 0;
			thread_data::global_mutex_condition.notify_one();
		}
		thread_data::data_processing.unlock();
	}

	void rendering_synchronization() {
		thread_data::rendering.lock();
		thread_data::rendering_thread_complete++;
		if (thread_data::rendering_thread_complete == thread_data::rendering_thread) {
			//最后一个线程notify_one()
			thread_data::rendering_thread_complete = 0;
			thread_data::global_mutex_condition.notify_one();
		}
		thread_data::rendering.unlock();
	}


}