#include <iostream>
#include "Traingle.h"
#pragma once

class Rectangular_Traingle : public Traingle {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 90;
	int F = 3;
	std::string name = "Прямоугольный треугольник";

public:
	bool check() override;
	void print_info() override;
	Rectangular_Traingle();
};