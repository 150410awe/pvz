#pragma once
#include <cstdint>
#include "plant_state.h"
#include "plant_id.h"
#include "../../coordinates.h"

/*
* 植物属性类
*/
class plant_attributes {
private:
	/*
	* @brief 植物血量
	*/
	int32_t hp = 0;
	/*
	* @brief 植物攻击力
	*/
	int32_t attack_power = 0;
	/*
	* @brief 植物id
	*/
	plant_id id = plant_id::nullptr_plant;
	/*
	* @brief 植物状态
	*/
	plant_state state = plant_state::walk;
	/*
	* @brief 植物坐标
	*/
	coordinates location = coordinates(0,0);

public:
	int32_t get_hp() const;
	int32_t get_attack_power() const;
	const plant_id& get_id() const;
	const plant_state& get_state() const;
    const coordinates& get_location() const;

	void set_hp(int32_t set_hp);
	void set_attack_power(int32_t set_attack_power);
	void set_id(plant_id set_id);
	void set_state(plant_state set_state);
	void set_location(const coordinates& coordinates);

	plant_attributes() = default;
	~plant_attributes() = default;
};

/*
* 植物父类
*/
class plant {
private:
	plant_attributes attributes;

public:

	const plant_attributes& get_attributes() const;

	void set_hp(int32_t set_hp);
	void set_attack_power(int32_t set_attack_power);
	void set_id(plant_id set_id);
	void set_state(plant_state set_state);
	void set_x(int32_t set_x);
	void set_y(int32_t set_y);

	plant() = default;
	virtual ~plant() = 0;
};