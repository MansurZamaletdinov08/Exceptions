#include <iostream>
#include "Rectangle.h"
#include "Exception.h"


bool Rectangle::check() {
	if ((a == c && b == d) && (A && B && C && D == 90)) {
		return true;
	}
	else {
		return false;
	}
}

Rectangle::Rectangle() {
	if (check() == false) {
		throw Exception("стороны a,c и b,d не равны попарно, не все углы равны 90");
	}
}

void Rectangle::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << " " << d << "; Углы: " << A << " " << B << " " << C << " " << D << ") ";
}