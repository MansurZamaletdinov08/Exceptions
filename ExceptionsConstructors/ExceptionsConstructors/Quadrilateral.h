#include <iostream>
#include "Figure.h"
#pragma once

class Quadrilateral : public Figure {
protected:
	int a = 10, b = 20, c = 30, d = 40;
	int A = 90, B = 90, C = 90, D = 90;
	int F = 4;
	std::string name = "Четырёхугольник";

public:
	bool check() override;
	void print_info() override;
	Quadrilateral();
};