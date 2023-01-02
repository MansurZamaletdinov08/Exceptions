#include <iostream>
#include "Quadrilateral.h"
#pragma once


class Rhomb : public Quadrilateral {
protected:
	int a = 30, b = 30, c = 30, d = 30;
	int A = 30, B = 30, C = 40, D = 40;
	std::string name = "Ромб";

public:
	bool check() override;
	void print_info() override;
	Rhomb();
};