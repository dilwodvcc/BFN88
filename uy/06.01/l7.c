#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n;
    printf("\t\tSon kiriting : ");
    scanf("%d",&n);
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
    printf("\t\tAsosiy dioganal : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                printf(" %d ,",matrix[i][j]);
            } 
        }
    }
}