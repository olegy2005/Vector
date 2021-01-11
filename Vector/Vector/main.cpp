#include <iostream>
using namespace std;
#include "Vector.h"
int main()
{
	cout << "Hello, git!\n";
	Vector<int> vec(10);
	vec[5] = 123;
	for (int i = 0; i < vec.getSize(); i++) {
		cout << vec[i] << ' ';
		cout << '\n';
	}
}