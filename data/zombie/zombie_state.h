#pragma once
#include <cstdint>

/*
* @brief ½©Ê¬×´Ì¬
*/
enum class zombie_state : int32_t {
	/*
	* @brief ÆÕÍ¨×´Ì¬
	*/
	walk = 0,
	/*
	* @brief ¹¥»÷×´Ì¬
	*/
	attack = 1,
	/*
	* @brief ËÀÍö×´Ì¬
	*/
	death = 2
};