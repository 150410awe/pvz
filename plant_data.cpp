#include "plant_data.h"
#include "data/environment/environment_data.h"


namespace plant_data {
	
	std::vector<std::vector<std::unique_ptr<lawn>>> plant_data = []() {
		/*��֪Ϊ��,�����ᷢ�����ش���,����ʹ���ȫ�İ�
		std::vector<std::vector<std::unique_ptr<lawn>>> data(environment_data::line, std::vector<std::unique_ptr<lawn>>(environment_data::column, std::make_unique<lawn>()));*/
		
		std::vector<std::vector<std::unique_ptr<lawn>>> data;

		data.resize(environment_data::line);

		for (auto& index_line : data) {
			index_line.resize(environment_data::column);

			for (auto& index_column : index_line) {
				index_column = std::make_unique<lawn>();
			}
		}

		return data;
	}();


}