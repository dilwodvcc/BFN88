#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n ;
    printf("\tSon kiriting :");
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=rand() % 899 + 100;
        }
    }
    puts("asil xolati");
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d ",arr[i][j]);
        }
        puts("");
    }
    puts("o'zgargani xolati");
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%4d ",arr[i][j]);
        }
        puts("");
    }
}