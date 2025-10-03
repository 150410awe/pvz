#pragma once
#include <cstdint>
#include <chrono>
#include <string>


class music {
public:
	music(const std::string_view path);
	~music() = default;

	/*
	* @brief 打开音乐
	*/
	void open() const;
	/*
	* @brief 播放音乐
	*/
	void play() const;
	/*
	* @brief 停止播放音乐
	*/
	void stop() const;
	/*
	* @brief 继续播放音乐
	*/
	void resume() const;
	/*
	* @brief 关闭音乐
	*/
	void close() const;
	/*
	* @brief 循环播放音乐
	*/
	void loop() const;
	/*
	* @brief 生成别名
	*/
	void generate_alias();
	/*
	* @brief 重新播放音乐
	*/
	void replay() const;
private:

	const std::string music_path;

	/*
	* @brief 音乐别名
	* @note 音乐别名，用于MCI命令
	*/
	mutable std::string alias = std::string();
	/*
	* @brief 是否已打开音乐
	*/
	mutable bool is_open = false;
    /*
	* @brief 是否已播放音乐
	*/
	mutable bool is_play = false;
};