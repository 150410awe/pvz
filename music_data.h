#pragma once
#include <cstdint>
#include <atomic>
#include <mutex>

namespace music_data {
	extern std::atomic<int32_t> music_quantity;
	extern std::mutex generate_alias_mutex;
}