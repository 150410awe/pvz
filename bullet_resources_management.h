#pragma once
#include "data/bullet/bullet_id.h"
#include "coordinates.h"
#include "data/bullet/bullet_state.h"

namespace bullet_resources_management {
    /*
    * @brief ��Դ��ʼ�������������ӵ�ͼƬ
    */
    void initialization();
    /*
    * @brief ��Ⱦ�ӵ�ͼƬ��ָ������
    * @param id �ӵ�id
    * @param location �ӵ�����
    */
    
    void flight_rendering(const bullet_id id, const coordinates& location);
    void hit_rendering(const bullet_id id, const coordinates& location);
    void death_rendering(const bullet_id id, const coordinates& location);

    void rendering(const bullet_id id, const coordinates& location, const bullet_state state);
}