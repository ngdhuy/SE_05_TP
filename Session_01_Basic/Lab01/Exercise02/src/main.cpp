/**
 * Created by NDHuy on 16/11/2020
 * Copyright by SEstudio
 * **/

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");

    int j = 1;
    while(j <= 10)
    {
        printf("%d\t", j);
        j++;
    }
    printf("\n");

    int n; 
    do
    {
        printf("Enter a positive number n = ");
        scanf("%d", &n);

        // Check to show error message
        if(n < 0)
            printf("Error, please enter again. ");
        
    } while(n < 0);
    printf("n = %d \n", n);

    return 0;
}