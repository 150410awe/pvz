#pragma once
#include <cstdint>

/*
 * @brief Ö²Îï×´Ì¬Ã¶¾Ù
 */
enum class plant_state : int32_t {
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