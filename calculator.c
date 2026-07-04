#include <stdio.h>
#include <math.h>
#include "calculator.h"

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        printf("\nError: Division by zero!\n");
        return 0;
    }

    return a / b;
}

double power(double a, double b)
{
    return pow(a, b);
}

double squareRoot(double a)
{
    if (a < 0)
    {
        printf("\nError: Negative number!\n");
        return 0;
    }

    return sqrt(a);
}