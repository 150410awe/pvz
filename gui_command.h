#pragma once
#include <cstdint>

/*
* 这里存放GUI命令
*/

/*
* gui 命令枚举
*/
enum class gui_command : int32_t {
	/*
	* 啥也没有
	*/
	command_null = 0,
	/*
	* 点击
	*/
	click = 1,
	/*
	* 进入战斗
	*/
	battlefield = 2,
	/*
	* 进入菜单
	*/
	menu = 3,
	/*
	* 退出
	*/
	exit = 4,
};