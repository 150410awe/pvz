#include "gui_main.h"
#include "command.h"
#include <easyx.h>
#include "data/environment/environment_data.h"
#include "global_data.h"
#include "environment.h"
#include "environment_management.h"
#include <iostream>

using namespace global_data;
using namespace environment_data;
using namespace environment;


namespace gui {
	void gui_main() {
		thread_management::gui();

		menu_rendering();
	}

	void menu_rendering() {
		thread_management::gui();

		while (is_menu == true) {
			peekmessage(&global_data::msg);

			environment_management::loop_play_menu_music();



			cleardevice();

			BeginBatchDraw();

			putimage(background_x, background_y, main_menu_img.get());

			menu_options_rendering();
			menu_options_moving_rendering();

			EndBatchDraw();


			switch (menu_options_click()) {
			case gui_command::battlefield:
				is_battlefield = true;
				environment_management::close_menu_music();;
				battlefield_rendering();
				break;
			case gui_command::exit:
					is_menu = false;
					environment_management::close_menu_music();
					break;
			default:
					break;
			}
		}
	}

	/*
	* @brief 渲染战斗场景
	*/
	void battlefield_rendering() {
		thread_management::gui();

		is_games = true;
		thread_data::global_mutex_condition.notify_one();

		while (is_battlefield == true) {
			peekmessage(&global_data::msg);

			environment_management::loop_play_battlefield_music();


			cleardevice();

			BeginBatchDraw();

			putimage(background_x, background_y, lawn.get());
			battlefield_options_rendering();

			EndBatchDraw();

			switch (battlefield_options_click()) {
			case gui_command::exit:
                is_battlefield = false;
				is_games = false;
				environment_management::close_battlefield_music();
				break;
			default:
					break;
			}
		}
	}



	/*
	* @brief 菜单选项
	*/
	void menu_options_rendering() {
		thread_management::gui();
		putimage(game_options_x, game_options_y, start_the_game.get());
		putimage(menu_exit_x, menu_exit_y, lawn_exit.get());
	}

	void menu_options_moving_rendering() {
		thread_management::gui();
		if (scope_coordinates::within_range(options_1, coordinates(global_data::msg.x, global_data::msg.y))) {
			menu_option_button_rendering(coordinates(options_1.get_x(), options_1.get_y()));
		}
	}

	void menu_option_button_rendering(const coordinates& set_coordinates) {
		thread_management::gui();
		putimage(set_coordinates.get_x(), set_coordinates.get_y(), click.get());
	}



	gui_command menu_options_click() {
		if (global_data::msg.message != WM_LBUTTONDOWN) 
			return gui_command::command_null;

		if (scope_coordinates::within_range(options_1, coordinates(global_data::msg.x, global_data::msg.y))) {
			return gui_command::battlefield;
		}
		if (scope_coordinates::within_range(menu_exit_data, coordinates(global_data::msg.x, global_data::msg.y))) {
			return gui_command::exit;
		}
		
		return gui_command::command_null;
	}


	void battlefield_options_rendering() {
        thread_management::gui();
        putimage(lawn_exit_x, lawn_exit_y, lawn_exit.get());
	}

	gui_command battlefield_options_click() {
		if (global_data::msg.message != WM_LBUTTONDOWN)
			return gui_command::command_null;

		//std::cout << "msg" << "x: " << global_data::msg.x << " y: " << global_data::msg.y << std::endl;
		//std::cout << "lawn_exit_data" << "x: " << lawn_exit_data.get_x() << " y: " << lawn_exit_data.get_y() << std::endl;
  //      std::cout << "x: " << lawn_exit_data.get_x() + lawn_exit_data.get_width() << " y: " << lawn_exit_data.get_y() + lawn_exit_data.get_height() << std::endl;

		if (scope_coordinates::within_range(lawn_exit_data, coordinates(global_data::msg.x, global_data::msg.y))) {
			return gui_command::exit;
		}


        return gui_command::command_null;
	}
}
