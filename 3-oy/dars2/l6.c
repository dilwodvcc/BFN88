#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int a=3,b=4;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j]=rand() % 10;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
                printf("%2d",arr[i][j]);

        }
        puts("");
    }
    puts("");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i==0)
            {
                printf("%2d",arr[i][j]);
            } 
        }
        puts("");
    }
}