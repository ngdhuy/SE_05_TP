/**
 * Created by NDHuy at 04/12/2020
 * Copyright by SEstudio
*/

#include <stdio.h>
#include "calc.h"

int main()
{
    int a = 5; 
    int b = 9; 
    
    printf("%d + %d = %d \n", a, b, Plus(a, b));
    printf("%d - %d = %d \n", a, b, Sub(a, b));
    printf("%d * %d = %d \n", a, b, Mul(a, b));
    printf("%d / %d = %d \n", a, b, Div(a, b));
    printf("%d %% %d = %d \n", a, b, Mod(a, b));

    float c = 3;
    float d = 1.2;

    printf("%f + %f = %f \n", c, d, Plus(c, d));
    printf("%f - %f = %f \n", c, d, Sub(c, d));
    printf("%f * %f = %f \n", c, d, Mul(c, d));
    printf("%f / %f = %f \n", c, d, Div(c, d));

    return 0;
}