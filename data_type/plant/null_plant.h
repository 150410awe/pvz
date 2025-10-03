#pragma once
#include "../../data/plant/plant.h"

class null_plant : public plant {
public:
	null_plant();
	~null_plant() = default;

	null_plant(const null_plant& other) = default;
	null_plant(null_plant&& other) = default;

	null_plant& operator=(const null_plant& other) = default;
	null_plant& operator=(null_plant&& other) = default;
};