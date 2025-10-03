#pragma once
#include <cstdint>
#include <vector>
#include "data/bullet/bullet.h"
#include "data/environment/environment_data.h"
#include <memory>

namespace bullet_data { 
	/*
	* @brief µ¯Ä»Êý¾Ý
	*/
	extern std::vector<std::vector<std::unique_ptr<bullet>>> bullet_data;


}