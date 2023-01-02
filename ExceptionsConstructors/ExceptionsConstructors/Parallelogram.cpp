#include <iostream>
#include "Parallelogram.h"
#include "Exception.h"


bool Parallelogram::check() {
	if ((a == b && c == d) && (A == B && C == D)) {
		return true;
	}
	else {
		return false;
	}
}


Parallelogram::Parallelogram() {
	if (check() == false) {
		throw Exception("Стороны a, c и b, d не равны попарно, углы A, C и B, D не равны попарно");
	}
}

void Parallelogram::print_info() {
	std::cout << name << " " << "(Стороны:  " << a << " " << b << " " << c << " " << d << "; Углы: " << A << " " << B << " " << C << " " << D << ") ";
}