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
* �����洢�ӵ������Դ��ͼƬ��·�������ƣ�
*/
namespace bullet_resources {
    /*
    * ����״̬
    */

    extern const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_flight;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_flight_path;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_flight_name;

    /*
    * ����״̬
    */

    extern const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_hit;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_hit_path;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_hit_name;

    /*
    * ��ʧ/����״̬
    */
    
    extern const std::unordered_map<bullet_id, std::shared_ptr<picture>> bullet_death;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_death_path;
    extern const std::unordered_map<bullet_id, std::string_view> bullet_death_name;

    /*
    * @brief ������Ƶ·��
    */
    inline constexpr std::string_view bullet_attack_music_path = "resources/music/bullet_attack.mp3";

    /*
    * @brief ������Ƶ
    */
    inline const music bullet_attack_music = music(bullet_attack_music_path);
}