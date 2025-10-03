#include "zombie.h"
#include <iostream>
#include "../../thread_data.h"
#include "../../command.h"
#include "../../thread_management.h"

/*
* zombie内实现
*/

/*
* zombie_attributes内实现
*/

/*
* get
*/

const  int32_t zombie_attributes::get_speed() const {
	return speed;
}

int32_t zombie_attributes::get_hp() const {
	return hp;
}

int32_t zombie_attributes::get_defensive_ability() const {
	return defensive_ability;
}

int32_t zombie_attributes::get_attack_power() const {
	return attack_power;
}

const zombie_id& zombie_attributes::get_id() const {
	return id;
}

const zombie_state& zombie_attributes::get_state() const {
	return state;
}

const coordinates& zombie_attributes::get_coordinates() const {
	return location;
}

/*
* set
*/

void zombie_attributes::set_speed(int32_t set_speed) {
	speed = set_speed;
}

void zombie_attributes::set_hp(int32_t set_hp) {
	hp = set_hp;
}

void zombie_attributes::set_defensive_ability(int32_t set_defensive_ability) {
	defensive_ability = set_defensive_ability;
}

void zombie_attributes::set_attack_power(int32_t set_attack_power) {
	attack_power = set_attack_power;
}

void zombie_attributes::set_id(zombie_id set_id) {
	id = set_id;
}

void zombie_attributes::set_state(zombie_state set_state) {
	state = std::move(set_state);
}

void zombie_attributes::set_coordinates(int32_t set_x, int32_t set_y) {
	location.set_x(set_x);
	location.set_y(set_y);
}

/*
* zombie内实现
*/

void zombie::move() {
	thread_management::plant_data();
	attributes.set_coordinates(attributes.get_coordinates().get_x() - attributes.get_speed(), attributes.get_coordinates().get_y());
}

/*
* get
*/

const zombie_attributes& zombie::get_attributes() const {
	return attributes;
}

/*
* set
*/

void zombie::set_speed(int32_t set_speed) {
	thread_management::plant_data();
	attributes.set_speed(set_speed);
}

void zombie::set_hp(int32_t set_hp) {
	thread_management::plant_data();
	attributes.set_hp(set_hp);
}

void zombie::set_defensive_ability(int32_t set_defensive_ability) {
	thread_management::plant_data();
	attributes.set_defensive_ability(set_defensive_ability);
}

void zombie::set_attack_power(int32_t set_attack_power) {
	thread_management::plant_data();
	attributes.set_attack_power(set_attack_power);
}

void zombie::set_id(zombie_id set_id) {
	thread_management::plant_data();
	attributes.set_id(set_id);
}

void zombie::set_state(zombie_state set_state) {
	thread_management::plant_data();
	attributes.set_state(set_state);
}

/*
* zombie内析构函数
*/

zombie::~zombie() {
	std::cout << "id:" << (int32_t)attributes.get_id() << "被析构" << std::endl;
}