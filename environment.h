#pragma once
#include <cstdint>
#include <string>
#include <graphics.h>
#include "music.h"
#include <memory>

/*
* ��Ϊvs2026��֧��easyx,��װ��,
*/

/*
* �����Ǵ汳����ص���Դ
* Ϊʲô�� namespace
* ��Ϊ namespace �ʺ���֯ȫ�ֳ�������������Դ������Ҫʵ���������ʼ�
* ��Ҫ��config/environment/config_environment.h����,�����������,����汳��ͼƬ��Դ
*/

namespace environment {
	/*
	* ����ͼƬ��Դ
	*/

	/*
	* ���˵�
	*/

	/*
	* @brief ���˵�ͼƬ
	*/
	inline const std::shared_ptr<IMAGE> main_menu_img = std::make_shared<IMAGE>();
	/*
	* @brief ���˵�ͼƬ����
	*/
	inline const std::string_view main_menu_name = "���˵�";
	/*
	* @brief ���˵�ͼƬ·��
	*/
	inline constexpr std::string_view main_menu_path = "resources/environment/menu.bmp";
	/*
	* @brief ���˵�����·��
	*/
	inline constexpr std::string_view main_menu_music_path = "resources/music/menu_music.mp3";
	/*
	* @brief ���˵�����
	*/
	inline const music main_menu_music = music(main_menu_music_path);

	/*
	* �ݵ�
	*/

	/*
	* @brief �ݵ�ͼƬ
	*/
	inline const std::shared_ptr<IMAGE> lawn = std::make_shared<IMAGE>();
	/*
	* @brief �ݵ�ͼƬ����
	*/
	inline const std::string_view lawn_name = "�ݵ�";
	/*
	* @brief �ݵ�ͼƬ·��
	*/
	inline constexpr std::string_view lawn_path = "resources/environment/lawn.bmp";
	/*
	* @brief �ݵ�����·��
	*/
	inline constexpr std::string_view lawn_music_path = "resources/music/lawn_music.mp3";
	/*
	* @brief �ݵ����ֶ���
	*/
    inline const music lawn_music = music(lawn_music_path);

	/*
	* һЩ��ť��Դ
	*/

	/*
	* @brief �����ťͼƬ
	*/
	inline const std::shared_ptr<IMAGE> click = std::make_shared<IMAGE>();
	/*
	* @brief �����ťͼƬ����
	*/
	inline const std::string_view click_name = "�����ť";
	/*
	* @brief �����ťͼƬ·��
	*/
	inline constexpr std::string_view click_path = "resources/environment/click.bmp";
	/*
	* @brief �����ť����·��
	*/
	inline constexpr std::string_view click_music_path = "resources/music/click_music.mp3";
	/*
	* @brief �˵����ֶ���
	*/
	inline const music menu_music = music(click_music_path);

	/*
	* �˵���ť��Դ
	*/

	/*
	* ��ʼ��Ϸ��ť
	*/
	inline const std::shared_ptr<IMAGE> start_the_game = std::make_shared<IMAGE>();
	
    inline const std::string_view start_the_game_name = "��ʼ��Ϸ��ť";

    inline constexpr std::string_view start_the_game_path = "resources/environment/start_the_game.bmp";

	/*
	* �ݵ��˳���ť
	*/

	inline const std::shared_ptr<IMAGE> lawn_exit = std::make_shared<IMAGE>();

	inline const std::string_view lawn_exit_name = "�˳�";

    inline constexpr std::string_view lawn_exit_path = "resources/sharing/exit.bmp";

	/*
	* �˵��˳���ť
	*/

	inline const std::shared_ptr<IMAGE> menu_exit = std::make_shared<IMAGE>();

	inline const std::string_view menu_exit_name = "�˳�";

    inline constexpr std::string_view menu_exit_path = "resources/sharing/exit.bmp";
}