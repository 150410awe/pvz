#pragma once
#include "file_data.h"
#include <filesystem>

/*
* @brief 输入输出文件操作
*/
namespace IO_operations_management {
	/*
	* @brief 生成文件路径
	* @param data 数据文件名
	* @param file 文件名
	* @return 文件路径
	*/
	std::filesystem::path generation_file_path(const std::string_view data = file_data_config::data_name, const std::string_view file = file_data_config::data_file_name);

	/*
	* @brief 保存游戏数据
	*/
	void save();

    /*
	* @brief 加载游戏数据
	*/
	void read();

	/*
	* @brief 文件检查
	*/
	//void file_checking(const std::filesystem::path & path = generation_file_path());

	/*
	* @brief 打开文件
	*/
	//void opening_file();



	/*
	* @brief 文件是否存在
	* @param path 文件路径
	* @return 文件存在且可读时返回true
	*/
	bool is_file_exists(const std::filesystem::path& path = generation_file_path());

	/*
	* @brief 删除文件
	* @param path 文件路径
	* @return 删除成功时返回true
	*/
	bool delete_file(const std::filesystem::path& path = generation_file_path());

	/*
	* @brief 创建目录
	* @param path 目录路径
	* @return 创建成功时返回true
	*/
	bool creating_directory(const std::filesystem::path& path = file_data_config::data_file_name);

	/*
	* @brief 创建文件
	* @param path 文件路径
	* @return 创建成功时返回true
	*/
	bool creating_file(const std::filesystem::path& path = generation_file_path());
}