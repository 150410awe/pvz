#pragma once
#include <vector>
#include "data/zombie/zombie.h"
#include "data/environment/environment_data.h"
#include <memory>
#include <cstdint>



namespace zombie_data {
	/*
	* @brief ½©Ê¬Êý¾Ý
	*/
	extern std::vector<std::vector<std::unique_ptr<zombie>>> zombie_data;
}