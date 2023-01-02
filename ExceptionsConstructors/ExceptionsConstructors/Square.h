#include <iostream>
#include "Quadrilateral.h"
#pragma once

class Square : public Quadrilateral {
protected:
	int a = 20, b = 20, c = 20, d = 20;
	int A = 90, B = 90, C = 90, D = 90;
	int F = 4;
	std::string name = " вадрат";

public:
	bool check() override;
	void print_info() override;
	Square();
};