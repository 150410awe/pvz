#pragma once
#include <graphics.h>
#include <cstdint>
#include <unordered_map>
#include "plant_id.h"
#include <string>
#include <memory>
#include "../../music.h"
#include "../../picture.h"

/*
* ÓÃÀ´´æ´¢Ö²ÎïÏà¹Ø×ÊÔ´£¨Í¼Æ¬¡¢Â·¾¶¡¢Ãû³Æ£©
*/
namespace plant_resources {

    /*
    * ÆÕÍ¨×´Ì¬
    */

    extern const std::unordered_map<plant_id, std::shared_ptr<picture>> plant_walk;
    extern const std::unordered_map<plant_id, std::string_view> plant_walk_path;
    extern const std::unordered_map<plant_id, std::string_view> plant_walk_name;

    /*
    * ¹¥»÷×´Ì¬
    */

    extern const std::unordered_map<plant_id, std::shared_ptr<picture>> plant_attack;
    extern const std::unordered_map<plant_id, std::string_view> plant_attack_path;
    extern const std::unordered_map<plant_id, std::string_view> plant_attack_name;

    /*
    * ËÀÍö×´Ì¬
    */

    extern const std::unordered_map<plant_id, std::shared_ptr<picture>> plant_death;
    extern const std::unordered_map<plant_id, std::string_view> plant_death_path;
    extern const std::unordered_map<plant_id, std::string_view> plant_death_name;

    /*
    * @brief ¹¥»÷ÒôÆµÂ·¾­
    */
    inline constexpr std::string_view plant_attack_music_path = "resources/music/plant_attack.mp3";

    /*
    * @brief ¹¥»÷ÒôÆµ
    */
    inline const music plant_attack_music = music(plant_attack_music_path);
}