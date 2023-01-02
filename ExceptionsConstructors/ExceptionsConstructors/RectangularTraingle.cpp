#include <iostream>
#include "RectangularTriangle.h"
#include "Exception.h"
#include "Traingle.h"


bool Rectangular_Traingle::check() {
	if (C == 90) {
		return true;
	}
	else {
		return false;
	}
}


Rectangular_Traingle::Rectangular_Traingle() {
	if (check() == false) {
		throw Exception("Угол C не равен 90 градусов");
	}
}


void Rectangular_Traingle::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << "; Углы: " << A << " " << B << " " << C << ") ";
}