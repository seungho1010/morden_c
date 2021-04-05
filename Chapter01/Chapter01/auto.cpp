#include <iostream>
#include <typeinfo>
#include "solution.h"

void auto_example() {
	std::cout << "[auto.cpp]" << std::endl;

	// ���� ���� auto Ÿ�� ������ ����
	auto a = 1;
	auto b = 1.0;
	auto c = a + b;
	auto d = { b, c };

	// ������ ���� Ÿ���� ����Ѵ�.
	std::cout << "type of a : " << typeid(a).name() << std::endl;
	std::cout << "type of b : " << typeid(b).name() << std::endl;
	std::cout << "type of c : " << typeid(c).name() << std::endl;
	std::cout << "type of d : " << typeid(d).name() << std::endl;
} 