#include <iostream>
#include "Traingle.h"
#include "Figure.h"
#include "Exception.h"


bool Traingle::check() {
	if ((a + b + c) == 180) {
		return true;
	}
	else {
		return false;
	}
}

void Traingle::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << "; Углы: " << A << " " << B << " " << C << ") ";

	if(check() == false) {
		throw Exception("Сумма углов не равна 180");
	}
}