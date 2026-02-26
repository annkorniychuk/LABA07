#include <stdio.h>
#include <math.h>
#include "functions.h"

double f(double x)
{
    return x * cbrt(1.0 - x);
}

void tab_for(double a, double b, double h)
{
    for (double x = a; x <= b; x += h)
        printf("x = %.3f   f(x) = %.6f\n", x, f(x));
}

void tab_while(double a, double b, double h)
{
    double x = a;
    while (x <= b) {
        printf("x = %.3f   f(x) = %.6f\n", x, f(x));
        x += h;
    }
}

void tab_do_while(double a, double b, double h)
{
    double x = a;
    if (h <= 0) return;
    do {
        printf("x = %.3f   f(x) = %.6f\n", x, f(x));
        x += h;
    } while (x <= b);
}
