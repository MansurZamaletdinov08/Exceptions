#include <iostream>
#include "Figure.h"

bool Figure::check() {
	if (F == 0) {
		return true;
	}
	else {
		return false;
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