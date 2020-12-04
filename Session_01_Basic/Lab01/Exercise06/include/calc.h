/**
 * Created by NDHuy at 04/12/2020
 * Copyright by SEstudio
*/

#ifndef __CALC_H__
#define __CALC_H__

#include <stdio.h>

void Swap(int& a, int& b);

int Plus(const int a, const int b);
int Sub(const int a, const int b);
int Mul(const int a, const int b);
int Div(const int a, const int b);
int Mod(const int a, const int b);

// overfload function
float Plus(const float a, const float b);
float Sub(const float a, const float b);
float Mul(const float a, const float b);
float Div(const float a, const float b);

#endif