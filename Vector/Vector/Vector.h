#pragma once
#include <stdexcept>
template<typename T>
class Vector
{
	T* elements = nullptr;
	int size{ 0 };
public:
	Vector(int size) : elements{ new T[size] {} }, size{ size }
	{

	}

	~Vector() {
		delete[] elements;
	}

	T& operator[] (int index) {
		if (index < 0 || index >= size) {
			throw std::out_of_range("index out of range");
		}
		return elements[index];
	}

	int getSize() const { return size; }
};

