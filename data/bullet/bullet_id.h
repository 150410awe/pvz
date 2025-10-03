#pragma once
#include <cstdint>
#include <array>

/*
* �ӵ�id
*/
enum class bullet_id : int32_t {
	/*
	* ɶҲ����
	*/
	nullptr_bullet = -1,
	/*
	* �㶹�ӵ�
	*/
	pea_bullet = 0,

	MAX,
};


constexpr std::array<bullet_id, static_cast<size_t>(bullet_id::MAX) + 1> bullet_id_arr = {
	bullet_id::nullptr_bullet,
	bullet_id::pea_bullet };