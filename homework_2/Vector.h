#pragma once
#include <iostream>

namespace custom
{
	template<typename T>
	class Vector
	{
	public:
		Vector() :data(new T[capacity]), capacity(10), m_size(0) {}
		~Vector()
		{
			delete data;
		}
	public:
		void push_back(T value)
		{
			if (m_size == capacity)
			{
				capacity *= 2;
				T* newData = new T[capacity];
				for (int i = 0; i < m_size; ++i)
				{
					newData[i] = data[i];
				}
				data = newData;
			}
			data[m_size++] = value;
		}
		void pop_back()
		{
			if (m_size == 0)
			{
				throw 0;
			}
			--m_size;
		}
		int size()const { return m_size; }
		bool empty()const { return m_size == 0; }
		T& operator[](int index)
		{
			if (index < 0 || index >= m_size)
				throw 0;
			return data[index];
		}
	protected:
		T* data;
		int m_size;
		int capacity;
	};
};