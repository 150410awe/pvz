#include "picture.h"

// picture实现
int32_t picture::get_frame_total() const { return frame_total; }
int32_t picture::get_frame_count() const { return frame_count; }
int32_t picture::get_frame_width() const { return frame_width; }
int32_t picture::get_frame_height() const { return frame_height; }
int32_t picture::get_width() const { return width; }
int32_t picture::get_height() const { return height; }



const std::unique_ptr<IMAGE>& picture::get_img() const { return img; }

void picture::load(const std::string_view set_path) const {
	loadimage(img.get(), set_path.data());
}

void picture::rendering(const coordinates& set_coordinates) const {
	// 计算当前帧的源矩形
	int32_t current_frame_x = frame_count * frame_width;
	int32_t current_frame_y = 0;
	do {
		// 使用透明参数渲染精灵图的当前帧
		putimage(set_coordinates.get_x(), set_coordinates.get_y(), frame_width, frame_height, img.get(), current_frame_x, current_frame_y, SRCCOPY);

		current_frame_x = frame_count * frame_width;
	} while (!next_frame());
}

bool picture::next_frame() const {
	frame_count++;
	if (frame_count >= frame_total) {
		frame_count = 0;
		return true;
	}
	return false;
}

picture::picture(int32_t frame_total, int32_t frame_width, int32_t frame_height, int32_t width, int32_t height)
	: frame_total(frame_total), frame_width(frame_width), frame_height(frame_height), width(width), height(height) {}

//picture::picture(const picture& other) : frame_total(other.frame_total), frame_width(other.frame_width), frame_height(other.frame_height), width(other.width), height(other.height){
//}
//
//picture& picture::operator=(const picture& other) {
//	// TODO: 在此处插入 return 语句
//}




//picture::picture(const std::unordered_map<state, picture>& img_map_init)
//: img_map(img_map_init) {
//}
//
//// picture实现
//const picture& picture::get_data() const {
//	return data;
//}
//
//const IMAGE& picture::get_img() const {
//	return img_map.at(now_state).get_img();
//}
//
//void picture::set_state(state set_state) {
//    now_state = set_state;
//}
//
//
//int32_t picture::get_frame_total() const {
//	return data.get_frame_total();
//}
//
//int32_t picture::get_frame_width() const {
//	return data.get_frame_width();
//}
//
//int32_t picture::get_frame_height() const {
//	return data.get_frame_height();
//}
//
//int32_t picture::get_frame_count() const {
//	return data.get_frame_count();
//}
//
//void picture::next_frame() {
//	data.next_frame();
//}
