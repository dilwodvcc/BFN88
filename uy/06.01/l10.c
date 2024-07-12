#include <stdio.h>
int main ()
{
    int n,m,a,sum = 0;
    printf("\tQatorni kiriting :");
    scanf("%d",&n);
    printf("\tUstunni kiriting :");
    scanf("%d",&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a);
            arr[i][j] = a;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%2d ",arr[i][j]);
        }
        puts("");
    }
    int e = 0;
    for(int i = 0; i < n && !e; i++)
     {
        for(int j = 0; j < m && !e; j++) 
        {
            if (arr[i][j] < 0)
            {
                e = 1;
            } 
            else 
            {
                if (i == 0 && j == 0) 
                {
                    printf("\t%d", arr[i][j]);
                } 
                else 
                {
                    printf(" + %d", arr[i][j]);
                }
                sum += arr[i][j];
            }
        }
    }
    printf(" = %d",sum);
}