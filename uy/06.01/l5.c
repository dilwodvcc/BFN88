#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n ,m;
    printf("\tQatorni kiriting :");
    scanf("%d",&n);
    printf("\tustunni kiriting :");
    scanf("%d",&m);
    puts("");
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]=rand() % 11 + 1;
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
        int max = arr[0][i];
        for (int j = 0; j < m; j++)
        {
            
            if (max > arr[j][i])
            {
                max=arr[j][i];
            }
        }
        printf("%d - ustun min = %d",i,max);
        puts("");
    }
}