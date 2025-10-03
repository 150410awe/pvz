#include "lawn.h"

lawn::lawn(std::unique_ptr<plant>&& objects) : objects(std::move(objects)) {
}

const std::unique_ptr<plant>& lawn::get_objects() const {
	return objects;
}

void lawn::set_objects(std::unique_ptr<plant>&& objects) {
	this->objects = std::move(objects);
}
