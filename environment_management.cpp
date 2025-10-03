#include "environment_management.h"
#include "data/environment/environment_data.h"
#include "thread_management.h"
#include <windows.h>
#include "coordinates.h"
#include "global_data.h"
#include "command.h"
#include <iostream>


using namespace environment;
using namespace environment_data;

namespace environment_management {

	/*
	* @brief 打开菜单音乐
	*/
	/*void open_menu_music() {
		thread_management::gui();
		main_menu_music.open();
	}*/

	/*
	* @brief 播放菜单音乐
	*/
	void play_menu_music() {
		thread_management::gui();
		main_menu_music.play();
	}

	/*
	* @brief 循环播放菜单音乐
	*/
	void loop_play_menu_music() {
		thread_management::gui();
		main_menu_music.loop();
	}

	/*
	* @brief 关闭菜单音乐
	*/
	void close_menu_music() {
		thread_management::gui();
		main_menu_music.close();
	}



	/*
	* @brief 打开战斗场音乐
	*/
	/*void open_battlefield_music() {
		thread_management::gui();
		lawn_music.open();
	}*/

	/*
	* @brief 播放战斗场景音乐
	*/
	void play_battlefield_music() {
		thread_management::gui();
		lawn_music.play();
	}

	/*
	* @brief 循环播放战斗场景音乐
	*/
	void loop_play_battlefield_music() {
		thread_management::gui();
		lawn_music.loop();
	}

	/*
	* @brief 关闭战斗场景音乐
	*/
	void close_battlefield_music() {
        thread_management::gui();
		lawn_music.close();
	}

	
	/*
	* @brief 环境初始化
	*/
	void initialization() {
		thread_management::gui();
		loadimage(main_menu_img.get(), main_menu_path.data());
		loadimage(lawn.get(), lawn_path.data());
		loadimage(click.get(), click_path.data());
		loadimage(start_the_game.get(), start_the_game_path.data());
		loadimage(lawn_exit.get(), lawn_exit_path.data());
	}



}