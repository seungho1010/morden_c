#include <iostream>
#include "solution.h"

void range_based_loop()
{
	std::cout << "[range_based_for_loop.cpp]" << std::endl;

	// �迭 ����
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// ���� begin(), end() �Լ��� ����ؼ� ���
	std::cout << "Displaying array element using range-based for loop";
	std::cout << std::endl;
	for (auto a : arr) std::cout << a << " ";
	std::cout << std::endl;
}