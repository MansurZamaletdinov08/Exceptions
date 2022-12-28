#include <iostream>
#include <exception>
#include "Print_info.h"
#include "Figure.h"
#include "Traingle.h"

int main() {
    setlocale(LC_ALL, "Ru");

    Figure figure;
    try {
        print_info(&figure);
        std::cout << "Создана.";
    }
    catch (std::exception& fi) {
        std::cout << "Ошибка создания фигуры. " << "Причина: " << fi.what() << std::endl;
    }

    Traingle traingle;
    try {
        print_info(&traingle);
        std::cout << "Создан.";
    }
    catch (std::exception& train) {
        std::cout << "Ошибка создания фигуры. " << "Причины: " << train.what() << std::endl;
    }

}