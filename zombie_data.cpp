#include "zombie_data.h"
#include "data_type/zombie/null_zombie.h"



namespace zombie_data {
	std::vector<std::vector<std::unique_ptr<zombie>>> zombie_data = []() {
		std::vector<std::vector<std::unique_ptr<zombie>>> data;

		data.resize(environment_data::line);

		for (auto& index_line : data) 
			index_line.reserve(100);
		
		return data;
	}();
}