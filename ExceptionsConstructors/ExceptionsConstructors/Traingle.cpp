#include <iostream>
#include "Traingle.h"
#include "Figure.h"
#include "Exception.h"


bool Traingle::check() {
	if ((A + B + C) == 180) {
		return true;
	}
	else {
		return false;
	}
}

Traingle::Traingle() {
	if (check() == false) {
		throw Exception("����� ����� �� ����� 180");
	}
}

void Traingle::print_info() {
	std::cout << name << " " << "(�������:  " << a << " " << b << " " << c << "; ����: " << A << " " << B << " " << C << ") ";
}