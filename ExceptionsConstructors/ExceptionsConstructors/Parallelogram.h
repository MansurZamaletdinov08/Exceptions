#include <iostream>
#include "Quadrilateral.h"
#pragma once

class Parallelogram : public Quadrilateral {
protected:
	int a = 20, b = 20, c = 30, d = 30;
	int A = 30, B = 30, C = 40, D = 40;
	std::string name = "ֿאנאככוכמדנאלל";

public:
	bool check() override;
	void print_info() override;
	Parallelogram();
};