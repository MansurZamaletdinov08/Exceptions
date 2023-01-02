#include <iostream>
#include "Square.h"
#include "Exception.h"

bool Square::check() {
	if ((a && b == c && d) && (A && B && C && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

Square::Square() {
	if (check() == false) {
		throw Exception("�� ��� ������� �����, �� ��� ���� ����� 90");
	}
}

void Square::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << " " << d << "; ����: " << A << " " << B << " " << C << " " << D << ") ";
}