#include <vector>
#include <iostream>
#include "solution.h"

void vector_example()
{
	std::cout << "[vector.cpp]" << std::endl;

	// 3���� ������ vector �ʱ�ȭ
	std::vector<int> vect = { 0, 1, 2 };

	// vector�� �� ��Ҹ� ���
	std::cout << "Original Data : ";
	for (auto v : vect) std::cout << v << " ";
	std::cout << std::endl;

	// 2���� �����͸� �߰�
	vect.push_back(3);
	vect.push_back(4);

	// ������ vector�� �� ��Ҹ� ���
	std::cout << "New Data Added : ";
	for (auto v : vect) std::cout << v << " ";
	std::cout << std::endl;

	// vector�� �� ��°�� �� ��° ����� ���� ����
	vect.at(2) = 5;
	vect.at(4) = 6;
	
	// ������ vector�� �� ��Ҹ� ���
	std::cout << "Manipulate Data : ";
	for (auto v : vect) std::cout << v << " ";
	std::cout << std::endl;
}