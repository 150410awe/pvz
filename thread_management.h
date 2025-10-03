#pragma once
#include "thread_data.h"

/*
* @brief �̹߳���
*/

namespace thread_management {

	/*
	* @brief �̳߳�ʼ��
	*/
	void initialization();

	/*
	* @brief gui�߳�����
	*/
	void gui();
	/*
	* @brief ��ʬ���ݴ����߳�����
	*/
	void zombie_data();
    /*
	* @brief ��ʬ��Ⱦ�߳�����
	*/
	void zombie_rendering();
	/*
	* @brief ֲ�����ݴ����߳�����
	*/
	void plant_data();
	/*
	* @brief ֲ����Ⱦ�߳�����
	*/
	void plant_rendering();
	/*
	* @brief �̹߳����߳�����
	*/
	void management();
	/*
	* @brief ���ݴ���ͬ��
	*/
	void data_processing_synchronization();
	/*
	* @brief ��Ⱦͬ��
	*/
	void rendering_synchronization();
}
