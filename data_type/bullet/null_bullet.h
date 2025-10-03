#pragma once
#include "../../data/bullet/bullet.h"


class null_bullet : public bullet {
public:
    null_bullet();
    ~null_bullet() = default;

    null_bullet(const null_bullet& other) = default;
    null_bullet(null_bullet&& other) = default;

    null_bullet& operator=(const null_bullet& other) = default;
    null_bullet& operator=(null_bullet&& other) = default;
};