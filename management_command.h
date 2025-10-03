#pragma once
#include <cstdint>

/*
* 管理命令
*/
enum class management_command : int32_t {
	/*
	* 啥也没有
	*/
	command_null = 0,
	/*
	* 保存
	*/
	save = 1,
};