#include <vector>
#include <algorithm>
#include <iostream>
#include "solution.h"

bool comparer(int a, int b)
{
	return (a > b);
}

void sort_example()
{
	std::cout << "[sort.cpp]" << std::endl;

	//�������� ������ ���� �ʱ�ȭ
	std::vector<int> vect = { 20, 43, 11, 78, 5, 96 };

	// ������ �� ��� ���
	std::cout << "Original Data : ";
	for (auto v : vect)
		std::cout << v << " ";
	std::cout << std::endl;

	// ���� ��Ҹ� ������������ ����
	std::sort(std::begin(vect), std::end(vect));

	// ������������ ���ĵ� ���� ���
	std::cout << "Original Data : ";
	for (auto v : vect)
		std::cout << v << " ";
	std::cout << std::endl;

	// comparer�� ����� ������������ ����
	std::sort(std::begin(vect), std::end(vect), comparer);

	// ������������ ���ĵ� ���� ���
	std::cout << "Original Data : ";
	for (auto v : vect)
		std::cout << v << " ";
	std::cout << std::endl;

}