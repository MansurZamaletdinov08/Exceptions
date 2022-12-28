#include <iostream>
#include <exception>
#include "Exception.h"
#include "Figure.h"

class Traingle : public Figure {
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
	int F = 3;
public:
	bool check() override;
	void print_info() override;
};