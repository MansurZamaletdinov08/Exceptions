#include <iostream>
#pragma once

class Figure {
protected:
	int a = 10, b = 20, c = 30, d = 40;
	int A = 10, B = 20, C = 10, D = 20;
	int F = 0;
	std::string name = "Фигура";

public:
	virtual bool check();
	virtual void print_info();
	Figure();
};