#pragma once
#include <vector>
#include "data/zombie/zombie.h"
#include "data/environment/environment_data.h"
#include <memory>
#include <cstdint>



namespace zombie_data {
	/*
	* @brief ��ʬ����
	*/
	extern std::vector<std::vector<std::unique_ptr<zombie>>> zombie_data;
}