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
		throw Exception("Стороны a и c неравны, углы A и C неравны");
	}
}


void Isosceles_Traingle::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << "; Углы: " << A << " " << B << " " << C << ") ";
}