#pragma once
#include <cstdint>

/*
* ������GUI����
*/

/*
* gui ����ö��
*/
enum class gui_command : int32_t {
	/*
	* ɶҲû��
	*/
	command_null = 0,
	/*
	* ���
	*/
	click = 1,
	/*
	* ����ս��
	*/
	battlefield = 2,
	/*
	* ����˵�
	*/
	menu = 3,
	/*
	* �˳�
	*/
	exit = 4,
};