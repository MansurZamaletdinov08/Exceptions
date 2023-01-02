#include <iostream>
#include "Rectangle.h"
#include "Exception.h"


bool Rectangle::check() {
	if ((a == c && b == d) && (A && B && C && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

Rectangle::Rectangle() {
	if (check() == false) {
		throw Exception("������� a,c � b,d �� ����� �������, �� ��� ���� ����� 90");
	}
}

void Rectangle::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << " " << d << "; ����: " << A << " " << B << " " << C << " " << D << ") ";
}