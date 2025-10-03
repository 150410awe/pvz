#pragma once
#include <cstdint>
#include <graphics.h>
#include <string>
#include <unordered_map>
#include "coordinates.h"
#include <memory>

enum class state : int32_t {
	state1 = 0,
	state2 = 1,
	state3 = 2,
	// ����չ����״̬
};

class picture {
private:
	/*
	* @brief ͼƬ
	*/
	std::unique_ptr<IMAGE> img = std::make_unique<IMAGE>();
	/*
	* @brief ��֡��
	*/
	int32_t frame_total = 0;
	/*
	* @brief ��ǰ֡
	*/
	mutable int32_t frame_count = 0;
	/*
	* @brief ֡���
	*/
	int32_t frame_width = 0;
	/*
	* @brief ֡�߶�
	*/
	int32_t frame_height = 0;
	/*
	* @brief ͼƬ���
	*/
	int32_t width = 0;
	/*
	* @brief ͼƬ�߶�
	*/
	int32_t height = 0;
public:
	int32_t get_frame_total() const;
	int32_t get_frame_count() const;
	int32_t get_frame_width() const;
	int32_t get_frame_height() const;
	int32_t get_width() const;
	int32_t get_height() const;
	const std::unique_ptr<IMAGE>& get_img() const;

	/*
	* @brief ����
	*/
	void load(const std::string_view set_path) const;
	/*
	* @brief ��Ⱦ
	* @param const coordinates& set_coordinates ����
	*/
	void rendering(const coordinates& set_coordinates) const;

	bool next_frame() const;
	/*
	* @param int32_t frame_total ��֡��
	* @param int32_t frame_width ֡���
	* @param int32_t frame_height֡�߶�
	* @param int32_t width ͼƬ���
	* @param int32_t height ͼƬ�߶�
	*/
	picture(int32_t frame_total, int32_t frame_width, int32_t frame_height, int32_t width, int32_t height);

	picture() = default;

	~picture() = default;


	picture(const picture& other) = delete;
	picture(picture&& other) = default;
	picture& operator=(const picture& other) = delete;
	picture& operator=(picture&& other) = default;
};

/*
* �ϼ�
*/

//class picture {
//public:
//
//	picture() = default;
//	// ��ʼ�� img_map �� data
//	picture(const std::unordered_map<state, picture>& img_map_init);
//
//	~picture() = default;
//
//	const picture& get_data() const;
//
//	// ��ȡ��ǰ״̬��ͼƬ
//	const IMAGE& get_img() const;
//
//	// �л�״̬
//	void set_state(state set_state);
//
//
//	// ֡���
//	int32_t get_frame_total() const;
//	int32_t get_frame_width() const;
//	int32_t get_frame_height() const;
//	int32_t get_frame_count() const;
//
//	// �л�����һ֡
//	void next_frame();
//private:
//
//	std::unordered_map<state, picture> img_map;
//
//	state now_state = state::state1;
//
//	picture data;
//};