#pragma once
#include "data/zombie/zombie_id.h"
#include "coordinates.h"
#include "data/zombie/zombie_state.h"



/*
* ��ʬ��Դ����������Դ��ʼ������Ⱦ...
*/
namespace zombie_resources_management {
	/*
	* @brief ��Դ��ʼ�����������н�ʬͼƬ
	*/
	void initialization();

	/*
	* @brief ��Ⱦ��ʬͼƬ��ָ������
	* @param id ��ʬid
	* @param location ��ʬ����
	*/
	void walk_rendering(const zombie_id id, const coordinates& location);
	/*
	* @brief ��Ⱦ��ʬͼƬ��ָ������
	* @param id ��ʬid
	* @param location ��ʬ����
	*/
	void attack_rendering(const zombie_id id, const coordinates& location);
	/*
	* @brief ��Ⱦ��ʬͼƬ��ָ������
	* @param id ��ʬid
	* @param location ��ʬ����
	*/
	void death_rendering(const zombie_id id, const coordinates& location);

	void rendering(const zombie_id id, const coordinates& location, const zombie_state state);
}