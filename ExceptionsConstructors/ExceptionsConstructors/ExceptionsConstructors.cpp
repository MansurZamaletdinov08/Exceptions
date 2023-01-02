#include <iostream>
#include "Exception.h"
#include "Print_info.h"
#include "Figure.h"
#include "Traingle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"

int main()
{
	setlocale(LC_ALL, "Ru");
	try
	{
		Traingle traingle;
		print_info(&traingle);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& traingle)
	{
		std::cout << "Ошибка создания фигуры. ";
		std::cout << "Причина: " << traingle.what() << std::endl;
	}


	try {
		Rectangular_Traingle RecTrain;
		print_info(&RecTrain);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& RecTrain) {
		std::cout << "Ошибка создания Прямоугольного треугольника. ";
		std::cout << "Причина: " << RecTrain.what() << std::endl;
	}


	try {
		Isosceles_Traingle IsoTrain;
		print_info(&IsoTrain);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& IsoTrain) {
		std::cout << "Ошибка создания Равнобедренного треугольника. ";
		std::cout << "Причина: " << IsoTrain.what() << std::endl;
	}


	try {
		EquilateralTraingle EquTrain;
		print_info(&EquTrain);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& EquTrain) {
		std::cout << "Ошибка создания Равностороннего треугольника. ";
		std::cout << "Причина: " << EquTrain.what() << std::endl;
	}


	try {
		Quadrilateral Quad;
		print_info(&Quad);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& Quad) {
		std::cout << "Ошибка создания Четырёхугольника. ";
		std::cout << "Причина: " << Quad.what() << std::endl;
	}


	
	try {
		Rectangle rectangle;
		print_info(&rectangle);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& rectangle) {
		std::cout << "Ошибка создания Прямоугольника. ";
		std::cout << "Причина: " << rectangle.what() << std::endl;
	}


	try {
		Square square;
		print_info(&square);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& square) {
		std::cout << "Ошибка создания Квадрата. ";
		std::cout << "Причина: " << square.what() << std::endl;
	}


	try {
		Parallelogram parallelogram;
		print_info(&parallelogram);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& parallelogram) {
		std::cout << "Ошибка создания Параллелограмма. ";
		std::cout << "Причина: " << parallelogram.what() << std::endl;
	}

	try {
		Rhomb rhomb;
		print_info(&rhomb);
		std::cout << "Создан." << std::endl;
	}
	catch (std::exception& rhomb) {
		std::cout << "Ошибка создания Ромба. ";
		std::cout << "Причина: " << rhomb.what() << std::endl;
	}
	return 0;
}