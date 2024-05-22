// main.cpp
#include <iostream>
#include <Windows.h>
#include "math_macros.h"


// ���������� ������� calculateW
double calculateW(double x, double z);

int main() {

    SetConsoleOutputCP(1251);

    double x, z, w;

    // �������� ������� x � z ������������
    std::cout << "������ �������� x: ";
    std::cin >> x;
    std::cout << "������ �������� z: ";
    std::cin >> z;

    // ���������� ������ ����� � ������
    if (z > 5 && z < 10) {
        w = MIN(x, z) * MAX(x + z, x * z);
    }
    else if (z <= 5 || z >= 10) {
        w = POW(MAX(ABS(x - z), z), 2);
    }
    else {
        std::cerr << "�������� ������� ��� z!" << std::endl;
        return 1;
    }

    // ��������� ����������
    std::cout << "��������� ���������: w = " << w << std::endl;

    return 0;
}

// ���������� ������� calculateW
double calculateW(double x, double z) {
    double w;

    if (z > 5 && z < 10) {
        w = MIN(x, z) * MAX(x + z, x * z);
    }
    else if (z <= 5 || z >= 10) {
        w = POW(MAX(ABS(x - z), z), 2);
    }
    else {
        std::cerr << "�������� ������� ��� z!" << std::endl;
        return 1;
    }

    return w;
}
