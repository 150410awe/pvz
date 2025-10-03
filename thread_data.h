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
	* @brief 渲染完成线程数量
	*/
	inline int32_t rendering_thread_complete = 0;
	/*
	* @brief 数据处理完成线程数量
	*/
	inline int32_t data_processing_thread_complete = 0;
	/*
	* @brief 渲染总线程数量
	*/
	inline constexpr int32_t rendering_thread = 2;
	/*
	* @brief 数据处理总线程数量
	*/
	inline constexpr int32_t data_processing_thread = 2;
	/*
	* @brief 全局工作线程数量
	*/
	inline std::atomic<int32_t> work_completed_thread = 0;

	/*
	* @brief 数据处理锁
	*/
	inline std::mutex data_processing;
	/*
	* @brief 渲染锁
	*/
	inline std::mutex rendering;
	/*
	* @brief 数据处理条件变量
	*/
	inline std::condition_variable data_processing_condition;
	/*
	* @brief 渲染条件变量
	*/
	inline std::condition_variable rendering_condition;
	/*
	* @brief 全局锁
	*/
	inline std::mutex global_mutex;
	/*
	* @brief 全局条件变量
	*/
	inline std::condition_variable global_mutex_condition;
	/*
	* @brief 全局锁
	*/
	inline std::mutex main_mutex;
    /*
	* @brief 全局条件变量
	*/
	inline std::condition_variable main_condition;
}