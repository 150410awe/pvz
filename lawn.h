#pragma once
#include "data/plant/plant.h"
#include <memory>
#include "data_type/plant/null_plant.h"

class lawn {
private:
	std::unique_ptr<plant> objects;
public:
	lawn(std::unique_ptr<plant>&& objects = std::make_unique<null_plant>());


	const std::unique_ptr<plant>& get_objects() const;

	void set_objects(std::unique_ptr<plant>&& objects);

	~lawn() = default;

	lawn(const lawn& other) = delete;
	lawn(lawn&& other) = default;

	lawn& operator=(const lawn& other) = delete;
	lawn& operator=(lawn&& other) = default;
};
