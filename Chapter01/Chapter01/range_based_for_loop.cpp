#include <iostream>
#include "solution.h"

void range_based_loop()
{
	std::cout << "[range_based_for_loop.cpp]" << std::endl;

	// 배열 선언
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// 비멤버 begin(), end() 함수를 사용해서 출력
	std::cout << "Displaying array element using range-based for loop";
	std::cout << std::endl;
	for (auto a : arr) std::cout << a << " ";
	std::cout << std::endl;
}