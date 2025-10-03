#include "plant_resources.h"
#include "../../resources_data/plant_set.h"


namespace plant_resources {
    const std::unordered_map<plant_id, std::shared_ptr<picture>> plant_walk = []() {
        std::unordered_map<plant_id, std::shared_ptr<picture>> map;
        map.emplace(plant_id::nullptr_plant, null_plant_resources_data::death_picture_data);
        map.emplace(plant_id::pea_shooter, pea_shooter_resources_data::walk_picture_data);
        return map;
        }();

    const std::unordered_map<plant_id, std::string_view> plant_walk_path = {
        { plant_id::pea_shooter, pea_shooter_resources_data::walk_path },
        { plant_id::nullptr_plant, null_plant_resources_data::walk_path}
    };

    const std::unordered_map<plant_id, std::string_view> plant_walk_name = {
        { plant_id::pea_shooter, pea_shooter_resources_data::walk_name },
        { plant_id::nullptr_plant , null_plant_resources_data::walk_name}
    };

    const std::unordered_map<plant_id, std::shared_ptr<picture>> plant_attack = []() {
        std::unordered_map<plant_id, std::shared_ptr<picture>> map;
        map.emplace(plant_id::nullptr_plant, null_plant_resources_data::attack_picture_data);
        map.emplace(plant_id::pea_shooter, pea_shooter_resources_data::attack_picture_data);
        return map;
        }();

    const std::unordered_map<plant_id, std::string_view> plant_attack_path = {
        { plant_id::pea_shooter, pea_shooter_resources_data::attack_path },
        { plant_id::nullptr_plant, null_plant_resources_data::attack_path }
    };

    const std::unordered_map<plant_id, std::string_view> plant_attack_name = {
        { plant_id::pea_shooter, pea_shooter_resources_data::attack_name },
        { plant_id::nullptr_plant, null_plant_resources_data::attack_name}
    };

    const std::unordered_map<plant_id, std::shared_ptr<picture>> plant_death = []() {
        std::unordered_map<plant_id, std::shared_ptr<picture>> map;
        map.emplace(plant_id::nullptr_plant, null_plant_resources_data::death_picture_data);
        map.emplace(plant_id::pea_shooter, pea_shooter_resources_data::death_picture_data);
        return map;
        }();

    const std::unordered_map<plant_id, std::string_view> plant_death_path = {
        { plant_id::nullptr_plant, null_plant_resources_data::death_path},
        { plant_id::pea_shooter, pea_shooter_resources_data::death_path }
    };

    const std::unordered_map<plant_id, std::string_view> plant_death_name = {
        { plant_id::nullptr_plant, null_plant_resources_data::death_name},
        { plant_id::pea_shooter, pea_shooter_resources_data::death_name }
    };
}