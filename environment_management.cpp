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
	* @brief �򿪲˵�����
	*/
	/*void open_menu_music() {
		thread_management::gui();
		main_menu_music.open();
	}*/

	/*
	* @brief ���Ų˵�����
	*/
	void play_menu_music() {
		thread_management::gui();
		main_menu_music.play();
	}

	/*
	* @brief ѭ�����Ų˵�����
	*/
	void loop_play_menu_music() {
		thread_management::gui();
		main_menu_music.loop();
	}

	/*
	* @brief �رղ˵�����
	*/
	void close_menu_music() {
		thread_management::gui();
		main_menu_music.close();
	}



	/*
	* @brief ��ս��������
	*/
	/*void open_battlefield_music() {
		thread_management::gui();
		lawn_music.open();
	}*/

	/*
	* @brief ����ս����������
	*/
	void play_battlefield_music() {
		thread_management::gui();
		lawn_music.play();
	}

	/*
	* @brief ѭ������ս����������
	*/
	void loop_play_battlefield_music() {
		thread_management::gui();
		lawn_music.loop();
	}

	/*
	* @brief �ر�ս����������
	*/
	void close_battlefield_music() {
        thread_management::gui();
		lawn_music.close();
	}

	
	/*
	* @brief ������ʼ��
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