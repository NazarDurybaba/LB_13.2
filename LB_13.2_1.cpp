// main.cpp
#include <iostream>
#include <Windows.h>
#include "math_macros.h"


// Оголошення функції calculateW
double calculateW(double x, double z);

int main() {

    SetConsoleOutputCP(1251);

    double x, z, w;

    // Введення значень x і z користувачем
    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть значення z: ";
    std::cin >> z;

    // Обчислення виразу згідно з умовою
    if (z > 5 && z < 10) {
        w = MIN(x, z) * MAX(x + z, x * z);
    }
    else if (z <= 5 || z >= 10) {
        w = POW(MAX(ABS(x - z), z), 2);
    }
    else {
        std::cerr << "Невідомий діапазон для z!" << std::endl;
        return 1;
    }

    // Виведення результату
    std::cout << "Результат обчислень: w = " << w << std::endl;

    return 0;
}

// Визначення функції calculateW
double calculateW(double x, double z) {
    double w;

    if (z > 5 && z < 10) {
        w = MIN(x, z) * MAX(x + z, x * z);
    }
    else if (z <= 5 || z >= 10) {
        w = POW(MAX(ABS(x - z), z), 2);
    }
    else {
        std::cerr << "Невідомий діапазон для z!" << std::endl;
        return 1;
    }

    return w;
}
