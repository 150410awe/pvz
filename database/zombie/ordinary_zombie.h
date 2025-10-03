#pragma once
#include <cstdint>
#include "../../data/zombie/zombie_id.h"


namespace ordinary_zombie_data {
	int32_t speed = 1;
	int32_t hp = 1000;
	int32_t defensive_ability = 100;
	int32_t attack_power = 100;
	zombie_id id = zombie_id::zombies;
}