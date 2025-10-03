#include "plant.h"
#include <iostream>
#include "../../thread_data.h"
#include "../../thread_management.h"

/*
* plant_attributes实现
*/

/*
* get
*/
int32_t plant_attributes::get_hp() const {
    return hp;
}

int32_t plant_attributes::get_attack_power() const {
    return attack_power;
}

const plant_id& plant_attributes::get_id() const {
    return id;
}

const plant_state& plant_attributes::get_state() const {
    return state;
}

const coordinates& plant_attributes::get_location() const {
    return location;
}


/*
* set
*/

void plant_attributes::set_hp(int32_t set_hp) {
    hp = set_hp;
}

void plant_attributes::set_attack_power(int32_t set_attack_power) {
    attack_power = set_attack_power;
}

void plant_attributes::set_id(plant_id set_id) {
    id = set_id;
}

void plant_attributes::set_state(plant_state set_state) {
    state = set_state;
}

/*
* plant实现
*/

/*
* get
*/

const plant_attributes& plant::get_attributes() const {
    return attributes;
}

/*
* set
*/

void plant::set_hp(int32_t set_hp) {
    thread_management::plant_data();
    attributes.set_hp(set_hp);
}

void plant::set_attack_power(int32_t set_attack_power) {
    thread_management::plant_data();
    attributes.set_attack_power(set_attack_power);
}

void plant::set_id(plant_id set_id) {
    thread_management::plant_data();
    attributes.set_id(set_id);
}

void plant::set_state(plant_state set_state) {
    thread_management::plant_data();
    attributes.set_state(set_state);
}

/*
* plant析构函数
*/
plant::~plant() {
    std::cout << "id:" << (int32_t)attributes.get_id() << "被析构" << std::endl;
}