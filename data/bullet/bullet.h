#pragma once
#include <cstdint>
#include "bullet_id.h"
#include "bullet_state.h"
#include "../../coordinates.h"

/*
* 子弹属性类
*/
class bullet_attributes {
private:
	/*
	* @brief 子弹id
	*/
	bullet_id id = bullet_id::nullptr_bullet;
	/*
	* @brief 子弹速度
	*/
	int32_t speed = 0;
	/*
	* @brief 子弹攻击力
	*/
	int32_t attack_power = 0;
	/*
	* @brief 子弹状态
	*/
	bullet_state state = bullet_state::flight;
	/*
	* @brief 子弹位置
	*/
	coordinates location = coordinates(0,0);
public:

	const bullet_id& get_id() const;
	int32_t get_speed() const;
	int32_t get_attack_power() const;
	const bullet_state& get_state() const;
    const coordinates& get_location() const;

	void set_id(bullet_id set_id);
	void set_speed(int32_t set_speed);
	void set_attack_power(int32_t set_attack_power);
	void set_state(bullet_state set_state);
    void set_location(const coordinates& set_location);
	coordinates& set_location();

	bullet_attributes() = default;
	~bullet_attributes() = default;
};

/*
* @brief 子弹父类
*/
class bullet {
private:
	bullet_attributes attributes;
public:
	const bullet_attributes& get_attributes() const;

	void move();

	bullet_attributes& set_attributes();

	bullet() = default;
	virtual ~bullet() = 0;

	/*bullet(const bullet& other) = default;
	bullet& operator=(const bullet& other) = default;

	bullet(bullet&& other) = default;
	bullet& operator=(bullet&& other) = default;*/

};