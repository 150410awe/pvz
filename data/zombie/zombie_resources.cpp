#include "zombie_resources.h"
#include "../../resources_data/zombie_set.h"

namespace zombie_resources { 
	/*
	* 僵尸资源实现
	*/


	const std::unordered_map<zombie_id, std::shared_ptr<picture>> zombie_walk = []() {
		std::unordered_map<zombie_id, std::shared_ptr<picture>> map;
		map.emplace(zombie_id::nullptr_zombie, null_zombie_resources_data::walk_picture_data);
		map.emplace(zombie_id::zombies, ordinary_zombie_resources_data::walk_picture_data);
		return map;
		}();
	
	const std::unordered_map<zombie_id, std::string_view> zombie_walk_path = {
		{ zombie_id::zombies, ordinary_zombie_resources_data::walk_path},
        { zombie_id::nullptr_zombie, null_zombie_resources_data::walk_path}
	};

	const std::unordered_map<zombie_id, std::string_view> zombie_walk_name = {
		{ zombie_id::zombies, ordinary_zombie_resources_data::walk_name},
        { zombie_id::nullptr_zombie, null_zombie_resources_data::walk_name}
	};


	const std::unordered_map<zombie_id, std::shared_ptr<picture>> zombie_attack = []() {
		std::unordered_map<zombie_id, std::shared_ptr<picture>> map;
		map.emplace(zombie_id::nullptr_zombie, null_zombie_resources_data::attack_picture_data);
		map.emplace(zombie_id::zombies, ordinary_zombie_resources_data::attack_picture_data);
		return map;
		}();

    const std::unordered_map<zombie_id, std::string_view> zombie_attack_path = {
        { zombie_id::zombies, ordinary_zombie_resources_data::attack_path },
		{ zombie_id::nullptr_zombie, null_zombie_resources_data::attack_path}
    };

    const std::unordered_map<zombie_id, std::string_view> zombie_attack_name = {
        { zombie_id::zombies, ordinary_zombie_resources_data::attack_name },
        { zombie_id::nullptr_zombie, null_zombie_resources_data::attack_name}
    };

	const std::unordered_map<zombie_id, std::shared_ptr<picture>> zombie_death = []() {
		std::unordered_map<zombie_id, std::shared_ptr<picture>> map;
		map.emplace(zombie_id::nullptr_zombie, null_zombie_resources_data::death_picture_data);
		map.emplace(zombie_id::zombies, ordinary_zombie_resources_data::death_picture_data);
		return map;
		}();

    const std::unordered_map<zombie_id, std::string_view> zombie_death_path = {
        { zombie_id::zombies, ordinary_zombie_resources_data::death_path },
        { zombie_id::nullptr_zombie, null_zombie_resources_data::death_path}
    };

    const std::unordered_map<zombie_id, std::string_view> zombie_death_name = {
        { zombie_id::zombies, ordinary_zombie_resources_data::death_name },
        { zombie_id::nullptr_zombie, null_zombie_resources_data::death_name}
    };
}