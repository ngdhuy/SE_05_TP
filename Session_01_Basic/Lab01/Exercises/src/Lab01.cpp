/**
 * Created by NDHuy on 16/11/2020
 * Copyright by SEstudio
 * **/

#include <stdio.h>

int main()
{
    int a; 
    int b; 
    int c;

    int biggest; 
    int medium; 
    int smallest;

    printf("Enter a integer number a = ");
    scanf("%d", &a);

    printf("Enter a integer number b = ");
    scanf("%d", &b);

    printf("Enter a integer number c = ");
    scanf("%d", &c);

    if(a > b)
    {
        if (a > c)
        {
            biggest = a;
            if(c > b)
            {
                medium = c; 
                smallest = b;
            }
            else
            {
                medium = b; 
                smallest = c;
            }
        }
        else
        {
            biggest = c;
            medium = a; 
            smallest = b;
        }
    }
    else
    {
        if (b > c)
        {
            biggest = b;
            if(a > c)
            {
                medium = a; 
                smallest = c;
            }
            else
            {
                medium = c; 
                smallest = a;
            }
        }
        else
        {
            biggest = c; 
            medium = b; 
            smallest = a;
        }
    }
    
    printf("%d < %d < %d\n", smallest, medium, biggest);

    return 0;
}