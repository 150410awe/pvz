#pragma once
#include <cstdint>
#include "zombie_state.h"
#include "zombie_id.h"
#include "../../coordinates.h"

/*
* ��ʬ����
*/

/*
* һЩ����
* void set_speed(int32_t&& set_speed);
* Ϊʲô��&&��Ϊ����ĵ�����ֵ,��ֵ��const����ʹ,��ordinary_zombie.h.cpp���������
*
* ���ö�����zombie_attributes����thread_management::thread_determination(thread_data::zombie_data_processing_id);ǰ�漺������
*
* ��zombie��thread_determination�Ƶ�thread_management
*/

class zombie_attributes {
private:
	/*
	* @brief ��ʬ�ٶ�
	*/
	int32_t speed = 0;
	/*
	* @brief ��ʬѪ��
	*/
	int32_t hp = 0;
	/*
	* @brief ��ʬ������
	*/
	int32_t defensive_ability = 0;
	/*
	* @brief ��ʬ������
	*/
	int32_t attack_power = 0;
	/*
	* @brief ��ʬid
	*/
	zombie_id id = zombie_id::nullptr_zombie;
	/*
	* @brief ��ʬ״̬
	*/
	zombie_state state = zombie_state::walk;
	/*
	* @brief ��ʬ����
	*/
	coordinates location = coordinates(0,0);
public:
	/*
	* @brief ��ȡ��ʬ�ٶ�
	* @return int32_t ��ʬ�ٶ�
	*/
	const  int32_t get_speed() const;
	/*
	* @brief ��ȡ��ʬѪ��
	* @return int32_t ��ʬѪ��
	*/
	int32_t get_hp() const;
	/*
	* @brief ��ȡ��ʬ������
	* @return int32_t ��ʬ������
	*/
	int32_t get_defensive_ability() const;
	/*
	* @brief ��ȡ��ʬ������
	* @return int32_t ��ʬ������
	*/
	int32_t get_attack_power() const;
	/*
	* @brief ��ȡ��ʬid
	* @return int32_t ��ʬid
	*/
	const zombie_id& get_id() const;
	/*
	* @brief ��ȡ��ʬ״̬
	* @return int32_t ��ʬ״̬
	*/
	const zombie_state& get_state() const;
	/*
	* @brief ��ȡ��ʬ����
	*/
    const coordinates& get_coordinates() const;
	/*
	* @brief ���뽩ʬ�ٶ�
	* @param set_speed ��ʬ�ٶ�
	*/
	void set_speed(int32_t set_speed);
	/*
	* @brief ���뽩ʬѪ��
	* @param set_hp ��ʬѪ��
	*/
	void set_hp(int32_t set_hp);
	/*
	* @brief ���뽩ʬ������
	* @param set_defensive_ability ��ʬ������
	*/
	void set_defensive_ability(int32_t set_defensive_ability);
	/*
	* @brief ���뽩ʬ������
	* @param set_attack_power ��ʬ������
	*/
	void set_attack_power(int32_t set_attack_power);
	/*
	* @brief ���뽩ʬid
	* @param set_id ��ʬid
	*/
	void set_id(zombie_id set_id);
	/*
	* @brief ���뽩ʬ״̬
	* @param set_state ��ʬ״̬
	*/
	void set_state(zombie_state set_state);
	/*
	* @brief ���뽩ʬ����
	*/
    void set_coordinates(int32_t set_x, int32_t set_y);

	zombie_attributes() = default;
	~zombie_attributes() = default;
};

class zombie {
private:
	/*
	* @brief ��ʬ����
	*/
	zombie_attributes attributes;

public:
	/*
	* @brief �ƶ�
	*/
	void move();
	/*
	* @brife get attributes
	* @note Ϊʲô����ָ��?vector�����ڴ淢���仯��
	* ��Ϊzombie��Ҫ�����ָ��,�����ָ���λ��,ָ��ָ��Ĳ���ı�
	*/
	const zombie_attributes& get_attributes() const;

	/*
	* һЩattributes������
	*/

	void set_speed(int32_t set_speed);
	void set_hp(int32_t set_hp);
	void set_defensive_ability(int32_t set_defensive_ability);
	void set_id(zombie_id set_id);
	void set_attack_power(int32_t set_attack_power);
	void set_state(zombie_state set_state);


	zombie() = default;
	virtual ~zombie() = 0;
};