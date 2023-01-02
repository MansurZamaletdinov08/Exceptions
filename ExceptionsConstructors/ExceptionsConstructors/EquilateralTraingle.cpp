#include <iostream>
#include "EquilateralTriangle.h"
#include "Exception.h"

bool EquilateralTraingle::check() {
	if ((a == b && c) && (A && B && C == 60)) {
		return true;
	}
	else {
		return false;
	}
}


EquilateralTraingle::EquilateralTraingle() {
	if (check() == false) {
		throw Exception("������� �� �����, ���� �� �����.");
	}
}


void EquilateralTraingle::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << "; ����: " << A << " " << B << " " << C << ") ";
}