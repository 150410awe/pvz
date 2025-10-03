#include "plant_resources_management.h"
#include "data/plant/plant_resources.h"
#include "thread_management.h"
#include <stdexcept>
#include <iostream>


using namespace plant_resources;

namespace plant_resources_management {

    void initialization() {
        thread_management::plant_data();

        for (const auto& index : plant_id_arr) {
            if (plant_walk.find(index) == plant_walk.end())
                throw std::runtime_error("There is no corresponding plant_walk");
            if (plant_attack.find(index) == plant_attack.end())
                throw std::runtime_error("There is no corresponding plant_attack");
            if (plant_death.find(index) == plant_death.end())
                throw std::runtime_error("There is no corresponding plant_death");


            if (plant_walk_path.find(index) == plant_walk_path.end())
                throw std::runtime_error("There is no corresponding plant_walk_path");
            if (plant_attack_path.find(index) == plant_attack_path.end())
                throw std::runtime_error("There is no corresponding plant_attack_path");
            if (plant_death_path.find(index) == plant_death_path.end())
                throw std::runtime_error("There is no corresponding plant_death_path");


            if (plant_walk_name.find(index) == plant_walk_name.end())
                throw std::runtime_error("There is no corresponding plant_walk_name");
            if (plant_attack_name.find(index) == plant_attack_name.end())
                throw std::runtime_error("There is no corresponding plant_attack_name");
            if (plant_death_name.find(index) == plant_death_name.end())
                throw std::runtime_error("There is no corresponding plant_death_name");
        }



        for (const auto& [key, value] : plant_walk) {
            const auto& path = plant_walk_path.at(key);
            value.get()->load(path);
        }

        for (const auto& [key, value] : plant_attack) {
            const auto& path = plant_attack_path.at(key);
            value.get()->load(path);
        }

        for (const auto& [key, value] : plant_death) {
            const auto& path = plant_death_path.at(key);
            value.get()->load(path);
        }
    }

    void walk_rendering(const plant_id id, const coordinates& location) {
        thread_management::plant_rendering();
        const auto& img = plant_walk.at(id);
        img.get()->rendering(location);

        static int32_t a = 0;
    }

    void attack_rendering(const plant_id id, const coordinates& location) {
        thread_management::plant_rendering();
        const auto& img = plant_attack.at(id);
        img.get()->rendering(location);
    }

    void death_rendering(const plant_id id, const coordinates& location) {
        thread_management::plant_rendering();
        const auto& img = plant_death.at(id);
        img.get()->rendering(location);
    }


    void rendering(const plant_id id, const coordinates& location, const plant_state state) {
        thread_management::plant_rendering();

        switch (state) {
        case plant_state::walk:
            walk_rendering(id, location);
            break;
        case plant_state::attack:
            attack_rendering(id, location);
            break;
        case plant_state::death:
            death_rendering(id, location);
            break;
        default:
            //...
            break;
        }
    }
}