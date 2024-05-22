// math_macros.h
#ifndef MATH_MACROS_H
#define MATH_MACROS_H

#include <cmath>  // ��� std::abs

// ������� ��� ���������� ������ � ���������
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// ������ ��� ���������� ����������� ��������
#define ABS(x) ((x) < 0 ? -(x) : (x))

// ������ ��� ��������� �� �������
#define POW(x, y) (pow((x), (y)))

#endif // MATH_MACROS_H
