#pragma once
#include <cstdint>
#include <vector>
#include "data/bullet/bullet.h"
#include "data/environment/environment_data.h"
#include <memory>

namespace bullet_data { 
	/*
	* @brief ��Ļ����
	*/
	extern std::vector<std::vector<std::unique_ptr<bullet>>> bullet_data;


}