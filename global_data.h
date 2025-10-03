#pragma once
#include <cstdint>
#include <easyx.h>

namespace global_data {
    /*
    * @brief ¿ªÊ¼ÓÎÏ·
    */
    inline bool is_games = false;

    inline bool zombie_rendering_prepare = false;
    inline bool zombie_data_processing_prepare = false;
    inline bool plant_rendering_prepare = false;
    inline bool plant_data_processing_prepare = false;
    inline bool management_prepare = false;

    inline bool data_processing_run = false;
    inline bool rendering_run = false;

    inline ExMessage msg;

    inline bool is_menu = true;
    inline bool is_battlefield = false;
}