#include <iostream>
#include "Quadrilateral.h"
#pragma once


class Rectangle : public Quadrilateral {
protected:
	int a = 10, b = 20, c = 10, d = 20;
	int A = 90, B = 90, C = 90, D = 90;
	int F = 4;
	std::string name = "Прямоугольник"; 

public:
	bool check() override;
	void print_info() override;
	Rectangle();
};