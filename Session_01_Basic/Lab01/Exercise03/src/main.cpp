/**
 * Created by NDHuy on 16/11/2020
 * Copyright by SEstudio
 * **/

#include <stdio.h>

int main()
{
    for(int i = 0; i <= 20; i++)
    {
        if(i == 5)
            continue;

        if(i > 10)
            break;

        printf("%d\t", i);
    }
    printf("\n");
    return 0;
}