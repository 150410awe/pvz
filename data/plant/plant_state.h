#pragma once
#include <cstdint>

/*
 * @brief ֲ��״̬ö��
 */
enum class plant_state : int32_t {
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