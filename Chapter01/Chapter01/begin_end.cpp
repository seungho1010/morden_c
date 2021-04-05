#include <iostream>
#include "solution.h"

void begin_end()
{
	std::cout << "[begin_end.cpp]" << std::endl;

	// �迭 ����
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// �������� for-loop�� ����ؼ� ���
	std::cout << "Displaying array element using conventional for-loop";
	std::cout << std::endl;
	for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	// ���� begin(), end() �Լ��� ����ؼ� ���
	std::cout << "Displaying array element using non-member begin() and end()";
	std::cout << std::endl;
	for (auto i = std::begin(arr); i != std::end(arr); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
}