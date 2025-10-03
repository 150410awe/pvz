#pragma once
#include <cstdint>
#include "thread_management.h"
#include "coordinates.h"
#include "command.h"

namespace gui {
	void gui_main();

	/*
	* @brief 渲染主菜单声明
	*/
	void menu_rendering();
	/*
	* @brief 战斗场渲染声明
	*/
	void battlefield_rendering();
	/*
	* @brief 菜单选项渲染声明
	*/
	void menu_options_rendering();
	/*
	* @brief 菜单选项选择,判断位置渲染对应移动到这个位置的图片
	*/
	void menu_options_moving_rendering();
	/*
	* @brief 渲染选择按钮
	* @param set_coordinates 点击位置
	*/
	void menu_option_button_rendering(const coordinates& set_coordinates);
	/*
	* @brief 菜单选项点击声明
	*/
	gui_command menu_options_click();
	/*
	* @brief 战斗场选项渲染声明
	*/
	void battlefield_options_rendering();
	/*
	* @brief 战斗场选项点击声明
	*/
	gui_command battlefield_options_click();
}