#include <iostream>
#include <exception>
#include <string>


int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw std::runtime_error("Вы ввели слово запретной длины! До свидания");
    }
}

int main() {
    setlocale(LC_ALL, "Ru");
    int size;
    int all = 0;
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> size;

    try {
        do {
            std::cout << "Введите слово: ";
            std::cin >> str;
            all = function(str, size);

            std::cout << "Длина слова " << " " << str << " " << "равна: " << str.length() << std::endl;
        } while (all != size);
    }
    catch (const std::runtime_error error) {
        std::cout << error.what() << std::endl;
    }
}