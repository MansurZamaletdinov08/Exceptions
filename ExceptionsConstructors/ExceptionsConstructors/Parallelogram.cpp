#include <iostream>
#include "Parallelogram.h"
#include "Exception.h"


bool Parallelogram::check() {
	if ((a == b && c == d) && (A == B && C == D)) {
		return true;
	}
	else {
		return false;
	}
}


Parallelogram::Parallelogram() {
	if (check() == false) {
		throw Exception("������� a, c � b, d �� ����� �������, ���� A, C � B, D �� ����� �������");
	}
}

void Parallelogram::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << " " << d << "; ����: " << A << " " << B << " " << C << " " << D << ") ";
}