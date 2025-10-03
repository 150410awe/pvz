#pragma once
#include <cstdint>

/*
* ����ϵ
*/

class coordinates {
private:
    int32_t x;
    int32_t y;
public:
    int32_t get_x() const;
    int32_t get_y() const;

    void set_x(int32_t set_x);
    void set_y(int32_t set_y);

    coordinates(int32_t x, int32_t y) : x(x), y(y){}
    ~coordinates() = default;


};


class scope_coordinates : public coordinates {
private:
    int32_t width = 0;
    int32_t height = 0;
public:
    int32_t get_width() const;
    int32_t get_height() const;

    void set_width(int32_t set_width);
    void set_height(int32_t set_height);
    /*
    * @brief �ж������Ƿ���ָ����Χ��
    * @param const scope_coordinates& location ��Χ
    * @param const coordinates& target Ŀ������
    */
    static bool within_range(const scope_coordinates& location, const coordinates& target);

    scope_coordinates(int32_t x, int32_t y, int32_t width, int32_t height) : coordinates(x, y), width(width), height(height){}
    ~scope_coordinates() = default;

    scope_coordinates(const scope_coordinates& other) = default;
    scope_coordinates(scope_coordinates&& other) = default;

    scope_coordinates& operator=(const scope_coordinates& other) = default;
    scope_coordinates& operator=(scope_coordinates&& other) = default;
};