#pragma once
#include <cstdint>
#include <chrono>
#include <string>


class music {
public:
	music(const std::string_view path);
	~music() = default;

	/*
	* @brief ������
	*/
	void open() const;
	/*
	* @brief ��������
	*/
	void play() const;
	/*
	* @brief ֹͣ��������
	*/
	void stop() const;
	/*
	* @brief ������������
	*/
	void resume() const;
	/*
	* @brief �ر�����
	*/
	void close() const;
	/*
	* @brief ѭ����������
	*/
	void loop() const;
	/*
	* @brief ���ɱ���
	*/
	void generate_alias();
	/*
	* @brief ���²�������
	*/
	void replay() const;
private:

	const std::string music_path;

	/*
	* @brief ���ֱ���
	* @note ���ֱ���������MCI����
	*/
	mutable std::string alias = std::string();
	/*
	* @brief �Ƿ��Ѵ�����
	*/
	mutable bool is_open = false;
    /*
	* @brief �Ƿ��Ѳ�������
	*/
	mutable bool is_play = false;
};