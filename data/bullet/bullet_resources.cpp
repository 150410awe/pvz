#include "bullet_resources.h"
#include "../../resources_data/bullet_set.h"


namespace bullet_resources {
    const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_flight = []() {
        std::unordered_map<bullet_id, std::shared_ptr<picture>> map;
        map.emplace(bullet_id::pea_bullet, pea_bullet_resources_data::flight_picture_data);
        map.emplace(bullet_id::nullptr_bullet, null_bullet_resources_data::flight_picture_data);
        return map;
        }();

    const std::unordered_map<bullet_id, std::string_view> bullet_flight_path = {
        { bullet_id::pea_bullet, pea_bullet_resources_data::flight_path },
        { bullet_id::nullptr_bullet, null_bullet_resources_data::flight_path }
    };

    const std::unordered_map<bullet_id, std::string_view> bullet_flight_name = {
        { bullet_id::pea_bullet, pea_bullet_resources_data::flight_name },
        { bullet_id::nullptr_bullet, null_bullet_resources_data::flight_name }
    };



    const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_hit = []() {
        std::unordered_map<bullet_id, std::shared_ptr<picture>> map;
        map.emplace(bullet_id::pea_bullet, pea_bullet_resources_data::hit_picture_data);
        map.emplace(bullet_id::nullptr_bullet, null_bullet_resources_data::hit_picture_data);
        return map;
        }();

    const std::unordered_map<bullet_id, std::string_view> bullet_hit_path = {
        { bullet_id::pea_bullet, pea_bullet_resources_data::hit_path },
        { bullet_id::nullptr_bullet, null_bullet_resources_data::hit_path }
    };

    const std::unordered_map<bullet_id, std::string_view> bullet_hit_name = {
        { bullet_id::pea_bullet, pea_bullet_resources_data::hit_name },
        { bullet_id::nullptr_bullet, null_bullet_resources_data::hit_name }
    };

    const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_death = []() {
        std::unordered_map<bullet_id, std::shared_ptr<picture>> map;
        map.emplace(bullet_id::pea_bullet, pea_bullet_resources_data::death_picture_data);
        map.emplace(bullet_id::nullptr_bullet, null_bullet_resources_data::death_picture_data);
        return map;
        }();

    const std::unordered_map<bullet_id, std::string_view> bullet_death_path = {
        { bullet_id::pea_bullet, pea_bullet_resources_data::death_path },
        { bullet_id::nullptr_bullet, null_bullet_resources_data::death_path}
    };

    const std::unordered_map<bullet_id, std::string_view> bullet_death_name = {
        { bullet_id::pea_bullet, pea_bullet_resources_data::death_name },
        { bullet_id::nullptr_bullet, null_bullet_resources_data::death_name}
    };
}