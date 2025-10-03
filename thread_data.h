#pragma once
#include <thread>
#include <mutex>
#include <atomic>

namespace thread_data {

	/*
	* Threads
	*/

	extern std::thread zombie_rendering_thread;
	extern std::thread zombie_data_processing_thread;
	extern std::thread plant_rendering_thread;
	extern std::thread plant_data_processing_thread;
	extern std::thread management_thread;

	/*
	* Thread ids
	*/
	
	extern std::thread::id gui_id;
	extern std::thread::id zombie_rendering_id;
	extern std::thread::id zombie_data_processing_id;
	extern std::thread::id plant_rendering_id;
	extern std::thread::id plant_data_processing_id;
	extern std::thread::id management_id;


	/*
	* @brief ��Ⱦ����߳�����
	*/
	inline int32_t rendering_thread_complete = 0;
	/*
	* @brief ���ݴ�������߳�����
	*/
	inline int32_t data_processing_thread_complete = 0;
	/*
	* @brief ��Ⱦ���߳�����
	*/
	inline constexpr int32_t rendering_thread = 2;
	/*
	* @brief ���ݴ������߳�����
	*/
	inline constexpr int32_t data_processing_thread = 2;
	/*
	* @brief ȫ�ֹ����߳�����
	*/
	inline std::atomic<int32_t> work_completed_thread = 0;

	/*
	* @brief ���ݴ�����
	*/
	inline std::mutex data_processing;
	/*
	* @brief ��Ⱦ��
	*/
	inline std::mutex rendering;
	/*
	* @brief ���ݴ�����������
	*/
	inline std::condition_variable data_processing_condition;
	/*
	* @brief ��Ⱦ��������
	*/
	inline std::condition_variable rendering_condition;
	/*
	* @brief ȫ����
	*/
	inline std::mutex global_mutex;
	/*
	* @brief ȫ����������
	*/
	inline std::condition_variable global_mutex_condition;
	/*
	* @brief ȫ����
	*/
	inline std::mutex main_mutex;
    /*
	* @brief ȫ����������
	*/
	inline std::condition_variable main_condition;
}