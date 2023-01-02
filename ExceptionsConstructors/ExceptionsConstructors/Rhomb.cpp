#include <iostream>
#include "Rhomb.h"
#include "Exception.h"


bool Rhomb::check() {
	if ((a == b == c == d) || (A == B || C == D)) {
		return true;
	}
	else {
		return false;
	}
}

Rhomb::Rhomb() {
	if (check() == false) {
		throw Exception("Не все стороны равны, углы A,C и B,D не равны попарно");
	}
}

void Rhomb::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << " " << d << "; Углы: " << A << " " << B << " " << C << " " << D << ") ";
}