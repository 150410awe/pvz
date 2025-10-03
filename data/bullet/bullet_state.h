#pragma once
#include <cstdint>

/*
* ×Óµ¯×´Ì¬Ã¶¾Ù
*/
enum class bullet_state : int32_t {
    /*
    * ·ÉĞĞ×´Ì¬
    */
    flight = 0,
    /*
    * ÃüÖĞ×´Ì¬
    */
    hit = 1,
    /*
    * ÏûÊ§/ËÀÍö×´Ì¬
    */
    death = 2
};