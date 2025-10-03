#pragma once
#include  <cstdint>

/*
* 植物数据处理命令
*/

/*
* 植物数据处理命令枚举
*/
enum class plant_data_processing_command : int32_t {
	/*
	* 啥也没有
	*/
	command_null = 0,
	/*
	* 创建一个普通植物
	*/
	create = 1,
};