#include "bullet.h"
#include <iostream>
#include "../../thread_management.h"

/*
* bullet_attributes实现
*/

/*
* get
*/

const bullet_id& bullet_attributes::get_id() const {
    return id;
}

int32_t bullet_attributes::get_speed() const {
    return speed;
}

int32_t bullet_attributes::get_attack_power() const {
    return attack_power;
}

const bullet_state& bullet_attributes::get_state() const {
    return state;
}

const coordinates& bullet_attributes::get_location() const {
    return location;
}


/*
* set
*/

void bullet_attributes::set_id(bullet_id set_id) {
    id = set_id;
}

void bullet_attributes::set_speed(int32_t set_speed) {
    speed = set_speed;
}

void bullet_attributes::set_attack_power(int32_t set_attack_power) {
    attack_power = set_attack_power;
}

void bullet_attributes::set_state(bullet_state set_state) {
    state = set_state;
}

void bullet_attributes::set_location(const coordinates& set_location) {
    location = set_location;
}

coordinates& bullet_attributes::set_location() {
    return location;
}


/*
* bullet实现
*/

/*
* set
*/

const bullet_attributes& bullet::get_attributes() const {
    return attributes;
}


void bullet::move() {
    thread_management::plant_data();
    attributes.set_location().set_x(attributes.get_location().get_x() + attributes.get_speed());
}

bullet_attributes& bullet::set_attributes() {
    return attributes;
}

bullet::~bullet() {
    std::cout << "bullet id:" << (int32_t)attributes.get_id() << "被析构" << std::endl;
}