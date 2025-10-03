#pragma once
#include "data/plant/plant_id.h"
#include "coordinates.h"
#include "data/plant/plant_state.h"

namespace plant_resources_management {
    /*
    * @brief ��Դ��ʼ������������ֲ��ͼƬ
    */
    void initialization();
    /*
    * @brief ��Ⱦֲ��ͼƬ��ָ������
    * @param id ֲ��id
    * @param location ֲ������
    */
    void walk_rendering(const plant_id id, const coordinates& location);
    /*
    * @brief ��Ⱦֲ��ͼƬ��ָ������
    * @param id ֲ��id
    * @param location ֲ������
    */
    void attack_rendering(const plant_id id, const coordinates& location);
    /*
    * @brief ��Ⱦֲ��ͼƬ��ָ������
    * @param id ֲ��id
    * @param location ֲ������
    */
    void death_rendering(const plant_id id, const coordinates& location);
    /*
    * @brief ͳһ��Ⱦ
    */
    void rendering(const plant_id id, const coordinates& location, const plant_state state);


}