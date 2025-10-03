#pragma once
#include <cstdint>
#include <string>
#include <graphics.h>
#include "music.h"
#include <memory>

/*
* 因为vs2026不支持easyx,假装有,
*/

/*
* 这里是存背景相关的资源
* 为什么用 namespace
* 因为 namespace 适合组织全局常量、函数和资源，不需要实例化，访问简单
* 不要与config/environment/config_environment.h混了,他存的是数据,这里存背景图片资源
*/

namespace environment {
	/*
	* 背景图片资源
	*/

	/*
	* 主菜单
	*/

	/*
	* @brief 主菜单图片
	*/
	inline const std::shared_ptr<IMAGE> main_menu_img = std::make_shared<IMAGE>();
	/*
	* @brief 主菜单图片名称
	*/
	inline const std::string_view main_menu_name = "主菜单";
	/*
	* @brief 主菜单图片路径
	*/
	inline constexpr std::string_view main_menu_path = "resources/environment/menu.bmp";
	/*
	* @brief 主菜单音乐路径
	*/
	inline constexpr std::string_view main_menu_music_path = "resources/music/menu_music.mp3";
	/*
	* @brief 主菜单音乐
	*/
	inline const music main_menu_music = music(main_menu_music_path);

	/*
	* 草地
	*/

	/*
	* @brief 草地图片
	*/
	inline const std::shared_ptr<IMAGE> lawn = std::make_shared<IMAGE>();
	/*
	* @brief 草地图片名称
	*/
	inline const std::string_view lawn_name = "草地";
	/*
	* @brief 草地图片路径
	*/
	inline constexpr std::string_view lawn_path = "resources/environment/lawn.bmp";
	/*
	* @brief 草地音乐路径
	*/
	inline constexpr std::string_view lawn_music_path = "resources/music/lawn_music.mp3";
	/*
	* @brief 草地音乐对象
	*/
    inline const music lawn_music = music(lawn_music_path);

	/*
	* 一些按钮资源
	*/

	/*
	* @brief 点击按钮图片
	*/
	inline const std::shared_ptr<IMAGE> click = std::make_shared<IMAGE>();
	/*
	* @brief 点击按钮图片名称
	*/
	inline const std::string_view click_name = "点击按钮";
	/*
	* @brief 点击按钮图片路径
	*/
	inline constexpr std::string_view click_path = "resources/environment/click.bmp";
	/*
	* @brief 点击按钮音乐路径
	*/
	inline constexpr std::string_view click_music_path = "resources/music/click_music.mp3";
	/*
	* @brief 菜单音乐对象
	*/
	inline const music menu_music = music(click_music_path);

	/*
	* 菜单按钮资源
	*/

	/*
	* 开始游戏按钮
	*/
	inline const std::shared_ptr<IMAGE> start_the_game = std::make_shared<IMAGE>();
	
    inline const std::string_view start_the_game_name = "开始游戏按钮";

    inline constexpr std::string_view start_the_game_path = "resources/environment/start_the_game.bmp";

	/*
	* 草地退出按钮
	*/

	inline const std::shared_ptr<IMAGE> lawn_exit = std::make_shared<IMAGE>();

	inline const std::string_view lawn_exit_name = "退出";

    inline constexpr std::string_view lawn_exit_path = "resources/sharing/exit.bmp";

	/*
	* 菜单退出按钮
	*/

	inline const std::shared_ptr<IMAGE> menu_exit = std::make_shared<IMAGE>();

	inline const std::string_view menu_exit_name = "退出";

    inline constexpr std::string_view menu_exit_path = "resources/sharing/exit.bmp";
}