#include <iostream>
#include "Traingle.h"
#pragma once


class Isosceles_Traingle : public Traingle {
protected:
	int a = 10, b = 20, c = 10;
	int A = 50, B = 60, C = 50;
	int F = 3;
	std::string name = "Равнобедренный треугольник";

public:
	bool check() override;
	void print_info() override;
	Isosceles_Traingle();
};