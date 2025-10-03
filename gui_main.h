#pragma once
#include <cstdint>
#include "thread_management.h"
#include "coordinates.h"
#include "command.h"

namespace gui {
	void gui_main();

	/*
	* @brief ��Ⱦ���˵�����
	*/
	void menu_rendering();
	/*
	* @brief ս������Ⱦ����
	*/
	void battlefield_rendering();
	/*
	* @brief �˵�ѡ����Ⱦ����
	*/
	void menu_options_rendering();
	/*
	* @brief �˵�ѡ��ѡ��,�ж�λ����Ⱦ��Ӧ�ƶ������λ�õ�ͼƬ
	*/
	void menu_options_moving_rendering();
	/*
	* @brief ��Ⱦѡ��ť
	* @param set_coordinates ���λ��
	*/
	void menu_option_button_rendering(const coordinates& set_coordinates);
	/*
	* @brief �˵�ѡ��������
	*/
	gui_command menu_options_click();
	/*
	* @brief ս����ѡ����Ⱦ����
	*/
	void battlefield_options_rendering();
	/*
	* @brief ս����ѡ��������
	*/
	gui_command battlefield_options_click();
}