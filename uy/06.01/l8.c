#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n=3;
    int matrix[n][n];
    puts("");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand () % 10; 
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",matrix[i][j]); 
        }
        puts("");
    }
    puts("");
    printf("\t\tTeskari dioganal : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0&&j==2||i==1&&j==1||i==2&&j==0)
            {
                printf(" %d ,",matrix[i][j]);
            } 
        }
    }
}