#include "ordinary_zombie.h"
#include "../../database/zombie/ordinary_zombie.h"

/*
* ������ͨ��ʬ
*/
ordinary_zombie::ordinary_zombie() {
	/*
	* ���ݳ�ʼ��
	*/

	set_speed(ordinary_zombie_data::speed);
	//set_state(zombie_state::walk);
	set_hp(ordinary_zombie_data::hp);
	set_defensive_ability(ordinary_zombie_data::defensive_ability);
	set_attack_power(ordinary_zombie_data::attack_power);
	set_id(ordinary_zombie_data::id);
}