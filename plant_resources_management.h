#pragma once
#include "data/plant/plant_id.h"
#include "coordinates.h"
#include "data/plant/plant_state.h"

namespace plant_resources_management {
    /*
    * @brief 资源初始化，加载所有植物图片
    */
    void initialization();
    /*
    * @brief 渲染植物图片到指定坐标
    * @param id 植物id
    * @param location 植物坐标
    */
    void walk_rendering(const plant_id id, const coordinates& location);
    /*
    * @brief 渲染植物图片到指定坐标
    * @param id 植物id
    * @param location 植物坐标
    */
    void attack_rendering(const plant_id id, const coordinates& location);
    /*
    * @brief 渲染植物图片到指定坐标
    * @param id 植物id
    * @param location 植物坐标
    */
    void death_rendering(const plant_id id, const coordinates& location);
    /*
    * @brief 统一渲染
    */
    void rendering(const plant_id id, const coordinates& location, const plant_state state);


}