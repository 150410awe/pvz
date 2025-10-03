#include "IO_operations_management.h"
#include "thread_management.h"
#include "IO_operations_data.h"

#include <iostream>


namespace IO_operations_management {
	void save() {
		thread_management::management();

		creating_directory();
		creating_file();

		std::ofstream cin_file(generation_file_path() , std::ios::trunc | std::ios::out);

		//打开文件
		if (cin_file.is_open() == false) {
			std::cout << "File not opened" << std::endl;
			return;
		}



	}

	void read() {
		thread_management::management();

		std::ifstream cin_file(generation_file_path(), std::ios::in);

		//打开文件
		if (cin_file.is_open() == false) {
			std::cout << "File not opened" << std::endl;
			return;
		}

		//...读
	}
	
	/*void file_checking(const std::filesystem::path& path) {
		thread_management::management();
	}*/

	//void opening_file() {
	//       thread_management::management();

	//	//打不开且不可读, 则创建文件 and 目录
	//	if (is_file_exists() == false) {
	//		std::cout << "File is empty" << std::endl;

	//		//创建目录
	//		creating_directory();

	//		//创建文件

	//		if (creating_file() == false)
	//			return ;//创建文件失败,说明不可读
	//	}

	//}

	bool is_file_exists(const std::filesystem::path& path) {
		thread_management::management();
		std::fstream file(path);
		return file.good();;
	}

	bool delete_file(const std::filesystem::path& path) {
		thread_management::management();
		try {
			if (std::filesystem::remove(path)) {
				std::cout << "File deleted" << std::endl;
				return true;
			}
			else {
				std::cout << "File not deleted" << std::endl;
				return false;
			}
		}
		catch (const std::filesystem::filesystem_error& err) {
			return false;
		}
		return false;
	}

	bool creating_directory(const std::filesystem::path& path) {
		thread_management::management();

		if (std::filesystem::create_directory(path)) {
			std::cout << "Directory created" << std::endl;
			return true;
		}
		else {
			std::cout << "Directory already exists or cannot be created" << std::endl;
			// 如果目录已存在，也返回 true
			return std::filesystem::exists(path);
		}
	}

	bool creating_file(const std::filesystem::path& path) {
		thread_management::management();
        try {
			if (creating_directory(path.parent_path()) == false)
				return false;

			std::ofstream file(path);
			if (file.is_open()) {
				std::cout << "File created" << std::endl;
				return true;
			}
			else {
				std::cout << "File not created" << std::endl;
				return false;
			}
		}
		catch (const std::filesystem::filesystem_error& err) {
			return false;
		}
		return false;
	}

	std::filesystem::path generation_file_path(const std::string_view data, const std::string_view file) {
		thread_management::management();
		return std::filesystem::path(file) / data;
	}




}
