#pragma once
#include <fstream>
#include <mutex>

namespace IO_operations_data {
	inline std::unique_lock<std::mutex> write_read_mutex;

}