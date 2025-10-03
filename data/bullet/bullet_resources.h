#pragma once
#include <graphics.h>
#include <cstdint>
#include <unordered_map>
#include "bullet_id.h"
#include "bullet_state.h"
#include <string>
#include <memory>
#include "../../picture.h"
#include "../../music.h"

/*
* 用来存储子弹相关资源（图片、路径、名称）
*/
namespace bullet_resources {
    /*
    * 飞行状态
    */

    extern const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_flight;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_flight_path;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_flight_name;

    /*
    * 命中状态
    */

    extern const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_hit;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_hit_path;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_hit_name;

    /*
    * 消失/死亡状态
    */
    
    extern const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_death;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_death_path;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_death_name;

    /*
    * @brief 攻击音频路经
    */
    inline constexpr std::string_view bullet_attack_music_path = "resources/music/bullet_attack.mp3";

    /*
    * @brief 攻击音频
    */
    inline const music bullet_attack_music = music(bullet_attack_music_path);
}