#include "command.h"
#include "thread_management.h"
#include "thread_data.h"
#include "gui_main.h"

namespace command_data {
	/*
	* 命令解析实现
	*/

	void gui_command_parser(gui_command id) {
		thread_management::gui();

		switch (id) {
		case gui_command::battlefield:

			gui::battlefield_rendering();

			gui.push(gui_command::battlefield);

			break;
		case gui_command::menu:

			gui::menu_rendering();

			gui.push(gui_command::menu);
		}

		gui.pop();
	}

	void zombie_rendering_command_parser(zombie_rendering_command id) {
		thread_management::zombie_rendering();
		if (id == zombie_rendering_command::command_null)
			return;
	}

	void zombie_data_processing_command_parser(zombie_data_processing_command id) {
		thread_management::zombie_data();
		if (id == zombie_data_processing_command::command_null)
			return;
	}

	void plant_rendering_command_parser(plant_rendering_command id) {
		thread_management::plant_rendering();
		if (id == plant_rendering_command::command_null)
			return;
	}

	void plant_data_processing_command_parser(plant_data_processing_command id) {
		thread_management::plant_data();
		if (id == plant_data_processing_command::command_null)
			return;
		else if (id == plant_data_processing_command::create) {
			//创建
		}
	}

	void management_command_parser(management_command id) {
		thread_management::management();
		if (id == management_command::command_null)
			return;
		else if (id == management_command::save) {
			//保存
		}
	}
}