/**
 * Created by NDHuy at 04/12/2020
 * Copyright by SEstudio
*/

#include "calc.h"

void Swap(int& a, int& b)
{
    int temp = a; 
    a = b; 
    b = temp;
}

int Plus(const int a, const int b)
{
    return a + b;
}

int Sub(const int a, const int b)
{
    return a - b;
}

int Mul(const int a, const int b)
{
    return a * b;
}

int Div(const int a, const int b)
{
    return a / b;
}

int Mod(const int a, const int b)
{
    return a % b;
}

float Plus(const float a, const float b)
{
    return a + b;
}

float Sub(const float a, const float b)
{
    return a - b;
}

float Mul(const float a, const float b)
{
    return a * b;
}

float Div(const float a, const float b)
{
    return a / b;
}
