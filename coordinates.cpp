#include "coordinates.h"




int32_t coordinates::get_x() const {
    return x;
}

int32_t coordinates::get_y() const {
    return y;
}

void coordinates::set_x(int32_t set_x) {
    x = set_x;
}

void coordinates::set_y(int32_t set_y) {
    y = set_y;
}

int32_t scope_coordinates::get_width() const {
    return width; 
}
int32_t scope_coordinates::get_height() const {
    return height; 
}

void scope_coordinates::set_width(int32_t set_width) {
    width = set_width; }

void scope_coordinates::set_height(int32_t set_height) {
    height = set_height;
}

bool scope_coordinates::within_range(const scope_coordinates& location, const coordinates& target) {
    if (location.get_x() <= target.get_x() && location.get_x() + location.get_width() >= target.get_x() && location.get_y() <= target.get_y() && location.get_y() + location.get_height() >= target.get_y())
        return true;
    return false;
}
