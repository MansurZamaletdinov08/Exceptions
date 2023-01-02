#include <iostream>
#include "Quadrilateral.h"
#include "Exception.h"


bool Quadrilateral::check() {
	if (F == 4 && (A + B + C + D) == 360) {
		return true;
	}
	else {
		return false;
	}
}


Quadrilateral::Quadrilateral() {
	if (check() == false) {
		throw Exception("Количество сторон неравно 4, сумма углов неравна 360");
	}
}

void Quadrilateral::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << " " << d << "; Углы: " << A << " " << B << " " << C << " " << D <<") ";
}