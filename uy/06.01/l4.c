#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n;
    printf("\tseriya sonini kiriting :");
    scanf("%d",&n);
    puts("");
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=rand() % 10;
        }
    }
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d ",arr[i][j]);
        }
        puts("");
    }
     for (int i = 0; i < n; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (max > arr[i][j])
            {
                max=arr[i][j];
            }
        }
        printf("%d - qator min = %d",i,max);
        puts("");
    }
}