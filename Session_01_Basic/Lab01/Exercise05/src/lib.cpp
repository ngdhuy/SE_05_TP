/**
 * Created by NDHuy at 04/12/2020
 * Copyright by SEstudio
*/

#include "lib.h"

void InputArray(int a[], int& n)
{
    printf("Enter num of array n = ");
    scanf("%d", &n);

    int temp;
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &temp);
        a[i] = temp;
    }
}

void OutputArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);

    printf("\n");
}

void SortIncrease(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                Swap(a[i], a[j]);
        }
    }
}

void Swap(int& a, int& b)
{
    int temp = a; 
    a = b; 
    b = temp;
}