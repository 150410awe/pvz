#pragma once
#include <cstdint>

/*
* @brief ��ʬ״̬
*/
enum class zombie_state : int32_t {
	/*
	* @brief ��ͨ״̬
	*/
	walk = 0,
	/*
	* @brief ����״̬
	*/
	attack = 1,
	/*
	* @brief ����״̬
	*/
	death = 2
};