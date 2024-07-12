#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int n = 3,a,b=0;
    int m = 3;
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
            printf("%2d",arr[i][j]);
        }
        puts("");
    }
    puts("");
    for (int a = 0; a < 10; a++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < m; j++)
        {
            if (a == arr[i][j])
            {
                count++;
            }     
        }  
        }
        if (count == 1)
        {
            printf("%2d",a);
        }
    }
}