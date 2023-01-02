#include <iostream>
#include "IsoscelesTriangle.h"
#include "Exception.h"


bool Isosceles_Traingle::check() {
	if ((a == c) && (A == C)) {
		return true;
	}
	else {
		return false;
	}
}


Isosceles_Traingle::Isosceles_Traingle() {
	if (check() == false) {
		throw Exception("������� a � c �������, ���� A � C �������");
	}
}


void Isosceles_Traingle::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << "; ����: " << A << " " << B << " " << C << ") ";
}