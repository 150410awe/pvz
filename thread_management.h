#pragma once
#include "thread_data.h"

/*
* @brief 线程管理
*/

namespace thread_management {

	/*
	* @brief 线程初始化
	*/
	void initialization();

	/*
	* @brief gui线程运行
	*/
	void gui();
	/*
	* @brief 僵尸数据处理线程运行
	*/
	void zombie_data();
    /*
	* @brief 僵尸渲染线程运行
	*/
	void zombie_rendering();
	/*
	* @brief 植物数据处理线程运行
	*/
	void plant_data();
	/*
	* @brief 植物渲染线程运行
	*/
	void plant_rendering();
	/*
	* @brief 线程管理线程运行
	*/
	void management();
	/*
	* @brief 数据处理同步
	*/
	void data_processing_synchronization();
	/*
	* @brief 渲染同步
	*/
	void rendering_synchronization();
}
