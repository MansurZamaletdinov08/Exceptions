#include <iostream>
#include "Rhomb.h"
#include "Exception.h"


bool Rhomb::check() {
	if ((a == b == c == d) || (A == B || C == D)) {
		return true;
	}
	else {
		return false;
	}
}

Rhomb::Rhomb() {
	if (check() == false) {
		throw Exception("�� ��� ������� �����, ���� A,C � B,D �� ����� �������");
	}
}

void Rhomb::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << " " << d << "; ����: " << A << " " << B << " " << C << " " << D << ") ";
}