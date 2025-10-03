#pragma once
#include "environment.h"
#include "coordinates.h"

/*
* @brief �������������ռ�
*/
namespace environment_management {

	/*
	* @brief �򿪲˵���������
	*/
	//void open_menu_music();
	/*
	* @brief ���Ų˵���������
	*/
	void play_menu_music();
	/*
	* @brief ѭ�����Ų˵���������
	*/
	void loop_play_menu_music();
	/*
	* @brief �رղ˵���������
	*/
	void close_menu_music();

	/*
	* @brief ��ս������������
	*/
	//void open_battlefield_music();
	/*
	* @brief ս�������ֲ�������
	*/
	void play_battlefield_music();
	/*
	* @brief ѭ������ս������������
	*/
	void loop_play_battlefield_music();

	/*
	* @brief �ر�ս������������
	*/
	void close_battlefield_music();

	/*
	* @brief ������ʼ������
	*/
	void initialization();

}