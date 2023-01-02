#include <iostream>
#include "Figure.h"
#include "Exception.h"

bool Figure::check() {
	if (F == 0) {
		return true;
	}
	else {
		return false;
	}
}


Figure::Figure() {
	if (F != 0) {
		throw Exception("Количество сторон фигуры не равно 0");
	}
}

void Figure::print_info() {
	std::cout << "Фигура: " << std::endl;
	if (check() == true) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}
	std::cout << "Количество сторон: " << F << "\n\n";
}