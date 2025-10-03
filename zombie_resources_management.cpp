#include "zombie_resources_management.h"
#include "data/zombie/zombie_resources.h"
#include "thread_management.h"
#include <stdexcept>


using namespace zombie_resources;

/*
* 僵尸资源管理实现
*/


namespace zombie_resources_management {
	// 初始化僵尸图片资源，将图片路径对应的图片加载到 zombie_walk
	void initialization() {
		thread_management::zombie_data();

        for (const auto& index : zombie_id_arr) {
            if (zombie_walk.find(index) == zombie_walk.end())
                throw std::runtime_error("There is no corresponding zombie_walk");
            if (zombie_attack.find(index) == zombie_attack.end())
                throw std::runtime_error("There is no corresponding zombie_attack");
            if (zombie_death.find(index) == zombie_death.end())
                throw std::runtime_error("There is no corresponding zombie_death");


            if (zombie_walk_path.find(index) == zombie_walk_path.end())
                throw std::runtime_error("There is no corresponding zombie_walk_path");
            if (zombie_attack_path.find(index) == zombie_attack_path.end())
                throw std::runtime_error("There is no corresponding zombie_attack_path");
            if (zombie_death_path.find(index) == zombie_death_path.end())
                throw std::runtime_error("There is no corresponding zombie_death_path");


            if (zombie_walk_name.find(index) == zombie_walk_name.end())
                throw std::runtime_error("There is no corresponding zombie_name");
            if (zombie_attack_name.find(index) == zombie_attack_name.end())
                throw std::runtime_error("There is no corresponding zombie_attack_name");
            if (zombie_death_name.find(index) == zombie_death_name.end())
                throw std::runtime_error("There is no corresponding zombie_death_name");
        }

        for (const auto& [key, value] : zombie_walk) {
            const auto& path = zombie_walk_path.at(key);
            /*if (path == zombie_walk_path.end())
                throw std::runtime_error("There is no corresponding zombie_walk_path");*/
            value.get()->load(path);
        }

        for (const auto& [key, value] : zombie_attack) {
            const auto& path = zombie_attack_path.at(key);
            /*if (path == zombie_attack_path.end())
                throw std::runtime_error("There is no corresponding zombie_attack_path");*/
            value.get()->load(path);
        }

        for (const auto& [key, value] : zombie_death) {
            const auto& path = zombie_death_path.at(key);
            /*if (path == zombie_death_path.end())
                throw std::runtime_error("There is no corresponding zombie_death_path");*/
            value.get()->load(path);
        }
	}

	void walk_rendering(const zombie_id id,const coordinates& location) {
		thread_management::zombie_rendering();
		const auto& img = zombie_walk.at(id);
        img.get()->rendering(location);
	}

    void attack_rendering(const zombie_id id, const coordinates& location) {
        thread_management::zombie_rendering();
        const auto& img = zombie_attack.at(id);
        img.get()->rendering(location);
    }

    void death_rendering(const zombie_id id, const coordinates& location) {
        thread_management::zombie_rendering();
        const auto& img = zombie_death.at(id);
        img.get()->rendering(location);
    }

    void rendering(const zombie_id id, const coordinates& location, const zombie_state state) {
        thread_management::zombie_rendering();
        switch (state) {
        case zombie_state::walk:
            walk_rendering(id, location);
            break;
        case zombie_state::attack:
            attack_rendering(id, location);
            break;
        case zombie_state::death:
            death_rendering(id, location);
            break;
        default:
            //...
            break;
        }
    }
}