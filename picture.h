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
	// 可扩展更多状态
};

class picture {
private:
	/*
	* @brief 图片
	*/
	std::unique_ptr<IMAGE> img = std::make_unique<IMAGE>();
	/*
	* @brief 总帧数
	*/
	int32_t frame_total = 0;
	/*
	* @brief 当前帧
	*/
	mutable int32_t frame_count = 0;
	/*
	* @brief 帧宽度
	*/
	int32_t frame_width = 0;
	/*
	* @brief 帧高度
	*/
	int32_t frame_height = 0;
	/*
	* @brief 图片宽度
	*/
	int32_t width = 0;
	/*
	* @brief 图片高度
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
	* @brief 加载
	*/
	void load(const std::string_view set_path) const;
	/*
	* @brief 渲染
	* @param const coordinates& set_coordinates 坐标
	*/
	void rendering(const coordinates& set_coordinates) const;

	bool next_frame() const;
	/*
	* @param int32_t frame_total 总帧数
	* @param int32_t frame_width 帧宽度
	* @param int32_t frame_height帧高度
	* @param int32_t width 图片宽度
	* @param int32_t height 图片高度
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
* 废件
*/

//class picture {
//public:
//
//	picture() = default;
//	// 初始化 img_map 和 data
//	picture(const std::unordered_map<state, picture>& img_map_init);
//
//	~picture() = default;
//
//	const picture& get_data() const;
//
//	// 获取当前状态的图片
//	const IMAGE& get_img() const;
//
//	// 切换状态
//	void set_state(state set_state);
//
//
//	// 帧相关
//	int32_t get_frame_total() const;
//	int32_t get_frame_width() const;
//	int32_t get_frame_height() const;
//	int32_t get_frame_count() const;
//
//	// 切换到下一帧
//	void next_frame();
//private:
//
//	std::unordered_map<state, picture> img_map;
//
//	state now_state = state::state1;
//
//	picture data;
//};