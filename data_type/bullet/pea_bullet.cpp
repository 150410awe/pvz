#include "pea_bullet.h"
#include "../../database/bullet/pea_bullet.h"

pea_bullet::pea_bullet() {
	set_attributes().set_id(pea_bullet_data::id);
	set_attributes().set_speed(pea_bullet_data::speed);
	set_attributes().set_attack_power(pea_bullet_data::attack_power);
}