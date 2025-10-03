#pragma once
#include <cstdint>
#include "../../coordinates.h"
/*
* �洢��Ϸ��������
*/

namespace environment_data {
	/*
	* ���ڴ�С
	*/

	inline constexpr int32_t window_long = 1300;
	inline constexpr int32_t window_width = 600;

	/*
	* ����ͼƬ��Ⱦλ��
	*/

	inline constexpr int32_t background_x = 0;
	inline constexpr int32_t background_y = 0;

	/*
	* @brief �ݵ�����
	*/
	inline constexpr int32_t line = 5;
	/*
	* @brief �ݵ�����
	*/
	inline constexpr int32_t column = 9;

	/*
	* @brief ��Ϸѡ����Ⱦλ��
	*/
	inline constexpr int32_t game_options_x = 900;
    inline constexpr int32_t game_options_y = 150;

	/*
	* @brief ��Ϸѡ�ť����
	*/
	inline constexpr int32_t game_options_num = 4;
	
	/*
	* @brief ��Ϸѡ�ť��С
	*/
	inline constexpr int32_t game_options_width = 200;
    inline constexpr int32_t game_options_height = 100;


	inline const scope_coordinates options_1 = scope_coordinates(game_options_x, game_options_y + game_options_height * 0, game_options_width, game_options_height);
    inline const scope_coordinates options_2 = scope_coordinates(game_options_x, game_options_y + game_options_height * 1, game_options_width, game_options_height);
	inline const scope_coordinates options_3 = scope_coordinates(game_options_x, game_options_y + game_options_height * 2, game_options_width, game_options_height);
	inline const scope_coordinates options_4 = scope_coordinates(game_options_x, game_options_y + game_options_height * 3, game_options_width, game_options_height);


	/*
	* �ݵ��˳���ť
	*/

	constexpr int32_t lawn_exit_x = window_long - 100;
    constexpr int32_t lawn_exit_y = 0;

	constexpr int32_t lawn_exit_width = 100;
    constexpr int32_t lawn_exit_height = 50;

    inline const scope_coordinates lawn_exit_data = scope_coordinates(lawn_exit_x, lawn_exit_y, lawn_exit_width, lawn_exit_height);

	/*
	* �˵��˳���ť
	*/

    constexpr int32_t menu_exit_x = window_long - 100;
    constexpr int32_t menu_exit_y = window_width - 50;

    constexpr int32_t menu_exit_width = 100;
    constexpr int32_t menu_exit_height = 50;

    inline const scope_coordinates menu_exit_data = scope_coordinates(menu_exit_x, menu_exit_y, menu_exit_width, menu_exit_height);
}