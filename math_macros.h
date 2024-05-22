// math_macros.h
#ifndef MATH_MACROS_H
#define MATH_MACROS_H

#include <cmath>  // для std::abs

// Макроси для визначення мінімуму і максимуму
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Макрос для визначення абсолютного значення
#define ABS(x) ((x) < 0 ? -(x) : (x))

// Макрос для піднесення до степеня
#define POW(x, y) (pow((x), (y)))

#endif // MATH_MACROS_H
