/**
 * Created by NDHuy at 09/11/2020
 * Copyright by SEstudio
**/

#include <stdio.h>

int main()
{
    printf("Hello world!!!\n");
    int a = 5; 
    int b = (a++) + 2; 
    printf("a = %d, b = %d \n", a, b);

    int c = 5;
    int d = (++c) + 2;
    printf("c = %d, d = %d \n", c, d);
    
    a = 5;
    a += 2;
    printf("a += 2 =  %d \n", a);
    a -= 2;
    printf("a -= 2 =  %d \n", a);
    a *= 2;
    printf("a *= 2 =  %d \n", a);
    a /= 2;
    printf("a /= 2 =  %d \n", a);
    a %= 3;
    printf("a %%= 3 =  %d \n", a);

    bool flag = true; 
    printf("flat = %d \n", flag);
    flag = !flag; 
    printf("flat = %d \n", flag);

    bool flag_1 = true; 
    bool flag_2 = false;

    bool flag_3 = flag_1 & flag_2;
    bool flag_4 = flag_1 | flag_2;

    printf("flag_3 = %d \n", flag_3);
    printf("flag_4 = %d \n", flag_4);

    return 0;
}