#pragma once
#include <cstdint>

/*
* �ӵ�״̬ö��
*/
enum class bullet_state : int32_t {
    /*
    * ����״̬
    */
    flight = 0,
    /*
    * ����״̬
    */
    hit = 1,
    /*
    * ��ʧ/����״̬
    */
    death = 2
};