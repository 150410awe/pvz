#pragma once
#include "data/zombie/zombie_id.h"
#include "coordinates.h"
#include "data/zombie/zombie_state.h"



/*
* 僵尸资源管理，负责资源初始化和渲染...
*/
namespace zombie_resources_management {
	/*
	* @brief 资源初始化，加载所有僵尸图片
	*/
	void initialization();

	/*
	* @brief 渲染僵尸图片到指定坐标
	* @param id 僵尸id
	* @param location 僵尸坐标
	*/
	void walk_rendering(const zombie_id id, const coordinates& location);
	/*
	* @brief 渲染僵尸图片到指定坐标
	* @param id 僵尸id
	* @param location 僵尸坐标
	*/
	void attack_rendering(const zombie_id id, const coordinates& location);
	/*
	* @brief 渲染僵尸图片到指定坐标
	* @param id 僵尸id
	* @param location 僵尸坐标
	*/
	void death_rendering(const zombie_id id, const coordinates& location);

	void rendering(const zombie_id id, const coordinates& location, const zombie_state state);
}