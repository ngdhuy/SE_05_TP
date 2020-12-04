/**
 * Created by NDHuy at 04/12/2020
 * Copyright by SEstudio
*/

#include <stdio.h>
#include "lib.h"

#define MAX 10

int main()
{
    // initial
    int a[MAX]; 
    int n;

    InputArray(a, n);
    OutputArray(a, n);
    SortIncrease(a, n);
    OutputArray(a, n);

    return 0;
}