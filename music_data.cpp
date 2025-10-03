#include "music_data.h"


namespace music_data { 
	std::atomic<int32_t> music_quantity = 0;
	std::mutex generate_alias_mutex;
}