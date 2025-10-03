#pragma once
#include <cstdint>
#include "../../coordinates.h"
/*
* 存储游戏环境数据
*/

namespace environment_data {
	/*
	* 窗口大小
	*/

	inline constexpr int32_t window_long = 1300;
	inline constexpr int32_t window_width = 600;

	/*
	* 背景图片渲染位置
	*/

	inline constexpr int32_t background_x = 0;
	inline constexpr int32_t background_y = 0;

	/*
	* @brief 草地行数
	*/
	inline constexpr int32_t line = 5;
	/*
	* @brief 草地列数
	*/
	inline constexpr int32_t column = 9;

	/*
	* @brief 游戏选项渲染位置
	*/
	inline constexpr int32_t game_options_x = 900;
    inline constexpr int32_t game_options_y = 150;

	/*
	* @brief 游戏选项按钮数量
	*/
	inline constexpr int32_t game_options_num = 4;
	
	/*
	* @brief 游戏选项按钮大小
	*/
	inline constexpr int32_t game_options_width = 200;
    inline constexpr int32_t game_options_height = 100;


	inline const scope_coordinates options_1 = scope_coordinates(game_options_x, game_options_y + game_options_height * 0, game_options_width, game_options_height);
    inline const scope_coordinates options_2 = scope_coordinates(game_options_x, game_options_y + game_options_height * 1, game_options_width, game_options_height);
	inline const scope_coordinates options_3 = scope_coordinates(game_options_x, game_options_y + game_options_height * 2, game_options_width, game_options_height);
	inline const scope_coordinates options_4 = scope_coordinates(game_options_x, game_options_y + game_options_height * 3, game_options_width, game_options_height);


	/*
	* 草地退出按钮
	*/

	constexpr int32_t lawn_exit_x = window_long - 100;
    constexpr int32_t lawn_exit_y = 0;

	constexpr int32_t lawn_exit_width = 100;
    constexpr int32_t lawn_exit_height = 50;

    inline const scope_coordinates lawn_exit_data = scope_coordinates(lawn_exit_x, lawn_exit_y, lawn_exit_width, lawn_exit_height);

	/*
	* 菜单退出按钮
	*/

    constexpr int32_t menu_exit_x = window_long - 100;
    constexpr int32_t menu_exit_y = window_width - 50;

    constexpr int32_t menu_exit_width = 100;
    constexpr int32_t menu_exit_height = 50;

    inline const scope_coordinates menu_exit_data = scope_coordinates(menu_exit_x, menu_exit_y, menu_exit_width, menu_exit_height);
}