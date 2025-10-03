#pragma once
#include "environment.h"
#include "coordinates.h"

/*
* @brief 环境管理命名空间
*/
namespace environment_management {

	/*
	* @brief 打开菜单音乐声明
	*/
	//void open_menu_music();
	/*
	* @brief 播放菜单音乐声明
	*/
	void play_menu_music();
	/*
	* @brief 循环播放菜单音乐声明
	*/
	void loop_play_menu_music();
	/*
	* @brief 关闭菜单音乐声明
	*/
	void close_menu_music();

	/*
	* @brief 打开战斗场音乐声明
	*/
	//void open_battlefield_music();
	/*
	* @brief 战斗场音乐播放声明
	*/
	void play_battlefield_music();
	/*
	* @brief 循环播放战斗场音乐声明
	*/
	void loop_play_battlefield_music();

	/*
	* @brief 关闭战斗场音乐声明
	*/
	void close_battlefield_music();

	/*
	* @brief 环境初始化声明
	*/
	void initialization();

}