#include "../../data/zombie/zombie.h"

class null_zombie : public zombie {
public:
	null_zombie();
	~null_zombie() = default;

	null_zombie(const null_zombie& other) = default;
	null_zombie(null_zombie&& other) = default;

	null_zombie& operator=(const null_zombie& other) = default;
	null_zombie& operator=(null_zombie&& other) = default;
};