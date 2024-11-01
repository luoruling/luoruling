#pragma once
#include <iostream>
#include <chrono>
namespace custom
{
	class Timer
	{
	public:
		Timer() 
		{
			m_start=std::chrono::high_resolution_clock::now();
		};
		~Timer()
		{
			m_end= std::chrono::high_resolution_clock::now();
			std::cout << "It costs " << (m_end - m_start).count() << "ms" << std::endl;
		}

	protected:
		std::chrono::time_point<std::chrono::high_resolution_clock> m_start;
		std::chrono::time_point<std::chrono::high_resolution_clock> m_end;
	};
}