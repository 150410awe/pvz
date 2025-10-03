#include "bullet_data.h"
#include "data_type/bullet/null_bullet.h"

namespace bullet_data {
	std::vector<std::vector<std::unique_ptr<bullet>>> bullet_data = []() {
		std::vector<std::vector<std::unique_ptr<bullet>>> data;

		data.resize(environment_data::line);

		for (auto& index_line : data) 
			index_line.reserve(1000);

		return data;
		}();
}