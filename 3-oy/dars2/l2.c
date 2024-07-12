#include <stdio.h>
int main()
{
    int a=4,b=4,c,sum=0;
    int arr[a][b];
    puts("\tSon kirit :");
    for(int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
        scanf("%d",&c); 
        arr[i][j]=c;       
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        puts("");
    }
    printf("\tQiymati = %d",sum);
}