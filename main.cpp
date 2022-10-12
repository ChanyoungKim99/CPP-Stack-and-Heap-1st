#include <iostream>

int main()
{
	int* p = new int;
	float* p2 = new float;

	int x;
	float y;

	std::cout << p << std::endl;
	std::cout << p2 << std::endl;
	std::cout << &x << std::endl;
	std::cout << &y << std::endl;


	// 동적으로 할당한 포인터와 로컬 변수의 영역이 분리되어있다.
}
