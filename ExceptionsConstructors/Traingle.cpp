#include <iostream>
#include <exception>
#include "Exception.h"
#include "Traingle.h"


bool Traingle::check() {
	if (F == 3 || (a + b + c) == 180) {
		return true;
	}
	else {
		return false;
	}
}

void Traingle::print_info() {
	std::cout << "�����������:" << std::endl;
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}
	std::cout << "���������� ������: " << F << std::endl;
	std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
}

Traingle::Traingle() {
	//if (check() != true) {}
	if (F != 3 || (a + b + c) != 180) {
		throw Exception("C���� ����� �� ����� 180");
	}
}