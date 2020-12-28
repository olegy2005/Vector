#pragma once
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
};

