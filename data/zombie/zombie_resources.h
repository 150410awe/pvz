#pragma once
#include <graphics.h>
#include <cstdint>
#include <unordered_map>
#include "zombie_id.h"
#include <string>
#include "../../music.h"
#include <memory>
#include "../../picture.h"

/*
* ÓÃÀ´´æ´¢½©Ê¬Ïà¹Ø×ÊÔ´£¨Í¼Æ¬¡¢Â·¾¶¡¢Ãû³Æ£©
*/
namespace zombie_resources {
	/*
	* ÆÕÍ¨×´Ì¬
	*/

	extern const std::unordered_map<zombie_id, std::shared_ptr<picture>> zombie_walk;
	extern const std::unordered_map<zombie_id, std::string_view> zombie_walk_path;
	extern const std::unordered_map<zombie_id, std::string_view> zombie_walk_name;

	/*
	* ¹¥»÷×´Ì¬
	*/

	extern const std::unordered_map<zombie_id, std::shared_ptr<picture>> zombie_attack;
	extern const std::unordered_map<zombie_id, std::string_view> zombie_attack_path;
	extern const std::unordered_map<zombie_id, std::string_view> zombie_attack_name;

	/*
	* ËÀÍö×´Ì¬
	*/

	extern const std::unordered_map<zombie_id, std::shared_ptr<picture>> zombie_death;
	extern const std::unordered_map<zombie_id, std::string_view> zombie_death_path;
	extern const std::unordered_map<zombie_id, std::string_view> zombie_death_name;

	/*
	* @brief ¹¥»÷ÒôÆµÂ·¾­
	*/
	inline constexpr std::string_view zombie_attack_music_path = "resources/music/zombie_attack.mp3";

	/*
	* @brief ¹¥»÷ÒôÆµ
	*/
	inline const music zombie_attack_music = music(zombie_attack_music_path);
}