#include "pea_shooter.h"
#include "../../database/plant/pea_shooter.h"

pea_shooter::pea_shooter() {
	set_hp(pea_shooter_data::hp);
	set_attack_power(pea_shooter_data::attack_power);
	set_id(pea_shooter_data::id);
}