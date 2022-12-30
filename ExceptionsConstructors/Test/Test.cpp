#include <iostream>
#include "Exception.h"
#include "Figure.h"
#include "Traingle.h"
#include "Print_info.h"

int main()
{
	setlocale(LC_ALL, "Ru");
	try
	{
		Traingle traingle;
		print_info(&traingle);
		std::cout << "создан." << std::endl;
	}
	catch (std::exception& train)
	{
		std::cout << "Ошибка создания фигуры. " ;
		std::cout << "Причина: " << train.what() << std::endl;
	}

}