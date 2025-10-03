#pragma once
#include <cstdint>
#include "zombie_state.h"
#include "zombie_id.h"
#include "../../coordinates.h"

/*
* 僵尸父类
*/

/*
* 一些问题
* void set_speed(int32_t&& set_speed);
* 为什么是&&因为传入的的是右值,左值加const不好使,看ordinary_zombie.h.cpp，后面改了
*
* 不用对下面zombie_attributes做出thread_management::thread_determination(thread_data::zombie_data_processing_id);前面己经有了
*
* 把zombie的thread_determination移到thread_management
*/

class zombie_attributes {
private:
	/*
	* @brief 僵尸速度
	*/
	int32_t speed = 0;
	/*
	* @brief 僵尸血量
	*/
	int32_t hp = 0;
	/*
	* @brief 僵尸防御力
	*/
	int32_t defensive_ability = 0;
	/*
	* @brief 僵尸攻击力
	*/
	int32_t attack_power = 0;
	/*
	* @brief 僵尸id
	*/
	zombie_id id = zombie_id::nullptr_zombie;
	/*
	* @brief 僵尸状态
	*/
	zombie_state state = zombie_state::walk;
	/*
	* @brief 僵尸坐标
	*/
	coordinates location = coordinates(0,0);
public:
	/*
	* @brief 获取僵尸速度
	* @return int32_t 僵尸速度
	*/
	const  int32_t get_speed() const;
	/*
	* @brief 获取僵尸血量
	* @return int32_t 僵尸血量
	*/
	int32_t get_hp() const;
	/*
	* @brief 获取僵尸防御力
	* @return int32_t 僵尸防御力
	*/
	int32_t get_defensive_ability() const;
	/*
	* @brief 获取僵尸攻击力
	* @return int32_t 僵尸攻击力
	*/
	int32_t get_attack_power() const;
	/*
	* @brief 获取僵尸id
	* @return int32_t 僵尸id
	*/
	const zombie_id& get_id() const;
	/*
	* @brief 获取僵尸状态
	* @return int32_t 僵尸状态
	*/
	const zombie_state& get_state() const;
	/*
	* @brief 获取僵尸坐标
	*/
    const coordinates& get_coordinates() const;
	/*
	* @brief 输入僵尸速度
	* @param set_speed 僵尸速度
	*/
	void set_speed(int32_t set_speed);
	/*
	* @brief 输入僵尸血量
	* @param set_hp 僵尸血量
	*/
	void set_hp(int32_t set_hp);
	/*
	* @brief 输入僵尸防御力
	* @param set_defensive_ability 僵尸防御力
	*/
	void set_defensive_ability(int32_t set_defensive_ability);
	/*
	* @brief 输入僵尸攻击力
	* @param set_attack_power 僵尸攻击力
	*/
	void set_attack_power(int32_t set_attack_power);
	/*
	* @brief 输入僵尸id
	* @param set_id 僵尸id
	*/
	void set_id(zombie_id set_id);
	/*
	* @brief 输入僵尸状态
	* @param set_state 僵尸状态
	*/
	void set_state(zombie_state set_state);
	/*
	* @brief 输入僵尸坐标
	*/
    void set_coordinates(int32_t set_x, int32_t set_y);

	zombie_attributes() = default;
	~zombie_attributes() = default;
};

class zombie {
private:
	/*
	* @brief 僵尸属性
	*/
	zombie_attributes attributes;

public:
	/*
	* @brief 移动
	*/
	void move();
	/*
	* @brife get attributes
	* @note 为什么可以指针?vector不会内存发升变化吗
	* 因为zombie是要存的是指针,变的是指针的位置,指针指向的不会改变
	*/
	const zombie_attributes& get_attributes() const;

	/*
	* 一些attributes的输入
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