#pragma once
#include "file_data.h"
#include <filesystem>

/*
* @brief ��������ļ�����
*/
namespace IO_operations_management {
	/*
	* @brief �����ļ�·��
	* @param data �����ļ���
	* @param file �ļ���
	* @return �ļ�·��
	*/
	std::filesystem::path generation_file_path(const std::string_view data = file_data_config::data_name, const std::string_view file = file_data_config::data_file_name);

	/*
	* @brief ������Ϸ����
	*/
	void save();

    /*
	* @brief ������Ϸ����
	*/
	void read();

	/*
	* @brief �ļ����
	*/
	//void file_checking(const std::filesystem::path & path = generation_file_path());

	/*
	* @brief ���ļ�
	*/
	//void opening_file();



	/*
	* @brief �ļ��Ƿ����
	* @param path �ļ�·��
	* @return �ļ������ҿɶ�ʱ����true
	*/
	bool is_file_exists(const std::filesystem::path& path = generation_file_path());

	/*
	* @brief ɾ���ļ�
	* @param path �ļ�·��
	* @return ɾ���ɹ�ʱ����true
	*/
	bool delete_file(const std::filesystem::path& path = generation_file_path());

	/*
	* @brief ����Ŀ¼
	* @param path Ŀ¼·��
	* @return �����ɹ�ʱ����true
	*/
	bool creating_directory(const std::filesystem::path& path = file_data_config::data_file_name);

	/*
	* @brief �����ļ�
	* @param path �ļ�·��
	* @return �����ɹ�ʱ����true
	*/
	bool creating_file(const std::filesystem::path& path = generation_file_path());
}