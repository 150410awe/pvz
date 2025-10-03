#pragma once
#include <queue>
#include "gui_command.h"
#include "zombie_rendering_command.h"
#include "plant_data_processing_command.h"
#include "plant_rendering_command.h"
#include "zombie_data_processing_command.h"
#include "management_command.h"


namespace command_data {

	inline std::queue<gui_command> gui;
	inline std::queue<zombie_rendering_command> zombie_rendering;
	inline std::queue<zombie_data_processing_command> zombie_data_processing;
	inline std::queue<plant_rendering_command> plant_rendering;
	inline std::queue<plant_data_processing_command> plant_data_processing;
	inline std::queue<management_command> management;

	/*
	* �������
	*/

	/*
	* gui
	*/
	void gui_command_parser(gui_command id);
	/*
	* @brief ��ʬ��Ⱦ
	*/
	void zombie_rendering_command_parser(zombie_rendering_command id);
	/*
	* @brief ��ʬ���ݴ���
	*/
	void zombie_data_processing_command_parser(zombie_data_processing_command id);
	/*
	* @brief ֲ����Ⱦ
	*/
	void plant_rendering_command_parser(plant_rendering_command id);
	/*
	* @brief ֲ�����ݴ���
	*/
	void plant_data_processing_command_parser(plant_data_processing_command id);
	/*
	* @brief ��������
	*/
	void management_command_parser(management_command id);
}