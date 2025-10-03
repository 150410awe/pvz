#pragma once
#include <cstdint>
#include <array>

enum class plant_id : int32_t {
	/*
	* nullptr_plant
	*/
	nullptr_plant = -1,
	/*
	* ÕÎ∂π…‰ ÷
	*/
	pea_shooter = 0,

	MAX,
};

constexpr std::array<plant_id, static_cast<size_t>(plant_id::MAX) + 1> plant_id_arr = {
	plant_id::nullptr_plant,
	plant_id::pea_shooter };