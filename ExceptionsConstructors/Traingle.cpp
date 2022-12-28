#include <iostream>
#include <exception>
#include "Exception.h"
#include "Traingle.h"


bool Traingle::check() {
	if (F == 3 || (a + b + c) == 180) {
		return true;
	}
	else {
		return false;
	}
}

void Traingle::print_info() {
	std::cout << "Треугольник:" << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}
	std::cout << "Количество сторон: " << F << std::endl;
	std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << "\n" << std::endl;
}

Traingle::Traingle() {
	//if (check() != true) {}
	if (F != 3 || (a + b + c) != 180) {
		throw Exception("Cумма углов не равна 180");
	}
}