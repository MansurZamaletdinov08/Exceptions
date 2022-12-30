#pragma once
#include "Figure.h"

class Traingle : public Figure
{
public:

	int a = 10, b = 20, c = 30;
	int A = 60, B = 60, C = 60;
	int F = 3;
	std::string name = "Треугольник";

protected:
	bool check() override;
	void print_info() override;
};