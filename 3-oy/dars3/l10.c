#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n ,m;
    printf("\tSon kiriting :");
    scanf("%d",&n);
    printf("\tSon kiriting :");
    scanf("%d",&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]=rand() % 10;
        }
    }
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%4d ",arr[i][j]);
        }
        puts("");
    }
     for (int i = 0; i < n; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < m; j++)
        {
            
            if (max > arr[i][j])
            {
                printf("%d",arr[0][0]);
            }
            else
            {
                max=arr[i][j];
            }
        }
        printf("%d",max);
        puts("");
    }
}