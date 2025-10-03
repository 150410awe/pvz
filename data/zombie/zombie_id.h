#pragma once
#include <cstdint>
#include <array>

/*
* 僵尸id
*/
enum class zombie_id : int32_t {
	/*
	* 啥也不是
	*/
	nullptr_zombie = -1,
	/*
	* 普通僵尸
	*/
	zombies = 0,

	MAX,
};

constexpr std::array<zombie_id, static_cast<size_t>(zombie_id::MAX) + 1> zombie_id_arr = {
	zombie_id::nullptr_zombie,
	zombie_id::zombies };