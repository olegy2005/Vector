#pragma once
class Vector
{
	int* elements = nullptr;
	int size{ 0 };
public:
	Vector(int size) : elements{ new int[size] {} }, size{ size }
	{

	}

	~Vector() {
		delete[] elements;
	}
};

