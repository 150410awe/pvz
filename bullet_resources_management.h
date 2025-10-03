#pragma once
#include "data/bullet/bullet_id.h"
#include "coordinates.h"
#include "data/bullet/bullet_state.h"

namespace bullet_resources_management {
    /*
    * @brief 资源初始化，加载所有子弹图片
    */
    void initialization();
    /*
    * @brief 渲染子弹图片到指定坐标
    * @param id 子弹id
    * @param location 子弹坐标
    */
    
    void flight_rendering(const bullet_id id, const coordinates& location);
    void hit_rendering(const bullet_id id, const coordinates& location);
    void death_rendering(const bullet_id id, const coordinates& location);

    void rendering(const bullet_id id, const coordinates& location, const bullet_state state);
}