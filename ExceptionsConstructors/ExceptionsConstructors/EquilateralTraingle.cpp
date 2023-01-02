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
		throw Exception("Стороны не равны, углы не равны.");
	}
}


void EquilateralTraingle::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << "; Углы: " << A << " " << B << " " << C << ") ";
}