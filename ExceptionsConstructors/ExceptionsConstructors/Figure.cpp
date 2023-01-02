#include <iostream>
#include "Figure.h"
#include "Exception.h"

bool Figure::check() {
	if (F == 0) {
		return true;
	}
	else {
		return false;
	}
}


Figure::Figure() {
	if (F != 0) {
		throw Exception("���������� ������ ������ �� ����� 0");
	}
}

void Figure::print_info() {
	std::cout << "������: " << std::endl;
	if (check() == true) {
		std::cout << "����������" << std::endl;
	}
	else {
		std::cout << "������������" << std::endl;
	}
	std::cout << "���������� ������: " << F << "\n\n";
}