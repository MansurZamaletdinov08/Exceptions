#include <iostream>
#include "Quadrilateral.h"
#include "Exception.h"


bool Quadrilateral::check() {
	if (F == 4 && (A + B + C + D) == 360) {
		return true;
	}
	else {
		return false;
	}
}


Quadrilateral::Quadrilateral() {
	if (check() == false) {
		throw Exception("���������� ������ ������� 4, ����� ����� ������� 360");
	}
}

void Quadrilateral::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << " " << d << "; ����: " << A << " " << B << " " << C << " " << D <<") ";
}