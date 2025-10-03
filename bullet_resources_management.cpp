#include "bullet_resources_management.h"
#include "data/bullet/bullet_resources.h"
#include "thread_management.h"
#include <stdexcept>

using namespace bullet_resources;

namespace bullet_resources_management {

    void initialization() {
        thread_management::plant_data();

        for (const auto& index : bullet_id_arr) {
            if (bullet_flight.find(index) == bullet_flight.end())
                throw std::runtime_error("There is no corresponding bullet_flight");
            if (bullet_hit.find(index) == bullet_hit.end())
                throw std::runtime_error("There is no corresponding bullet_hit");
            if (bullet_death.find(index) == bullet_death.end())
                throw std::runtime_error("There is no corresponding bullet_death");


            if (bullet_flight_path.find(index) == bullet_flight_path.end())
                throw std::runtime_error("There is no corresponding bullet_flight_path");
            if (bullet_hit_path.find(index) == bullet_hit_path.end())
                throw std::runtime_error("There is no corresponding bullet_hit_path");
            if (bullet_death_path.find(index) == bullet_death_path.end())
                throw std::runtime_error("There is no corresponding bullet_death_path");


            if (bullet_flight_name.find(index) == bullet_flight_name.end())
                throw std::runtime_error("There is no corresponding bullet_flight_name");
            if (bullet_hit_name.find(index) == bullet_hit_name.end())
                throw std::runtime_error("There is no corresponding bullet_hit_name");
            if (bullet_death_name.find(index) == bullet_death_name.end())
                throw std::runtime_error("There is no corresponding bullet_death_name");
        }

        for (const auto& [key, value] : bullet_flight) {
            const auto& path = bullet_flight_path.at(key);
            /*if (path == bullet_flight_path.end())
                throw std::runtime_error("There is no corresponding bullet_flight_path");*/
            value.get()->load(path);
        }

        for (const auto& [key, value] : bullet_hit) {
            const auto& path = bullet_hit_path.at(key);
            /*if (path == bullet_hit_path.end())
                throw std::runtime_error("There is no corresponding bullet_hit_path");*/
            value.get()->load(path);
        }

        for (const auto& [key, value] : bullet_death) {
            const auto& path = bullet_death_path.at(key);
            /*if (path == bullet_death_path.end())
                throw std::runtime_error("There is no corresponding bullet_death_path");*/
            value.get()->load(path);
        }
    }

    void flight_rendering(const bullet_id id, const coordinates& location) {
        thread_management::plant_rendering();
        const auto& img = bullet_flight.at(id);
        img.get()->rendering(location);
    }

    void hit_rendering(const bullet_id id, const coordinates& location) {
        thread_management::plant_rendering();
        const auto& img = bullet_hit.at(id);
        img.get()->rendering(location);
    }

    void death_rendering(const bullet_id id, const coordinates& location) {
        thread_management::plant_rendering();
        const auto& img = bullet_death.at(id);
        img.get()->rendering(location);
    }

    void rendering(const bullet_id id, const coordinates& location, const bullet_state state) {
        thread_management::plant_rendering();
        switch (state) {
        case bullet_state::flight:
            flight_rendering(id, location);
            break;
        case bullet_state::hit:
            hit_rendering(id, location);
            break;
        case bullet_state::death:
            death_rendering(id, location);
            break;
        default:
            break;
        }
    }
}