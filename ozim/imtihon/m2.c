#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void random (int a,char arrr[a][a])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            arrr[i][j] = rand() % 9;
        }
        
    }
    
}
int main ()
{
    srand(time(NULL));
    int a;
    printf("\tSon kiriting : ");
    scanf("%d",&a);
    char arr[a][a];
    random(a,arr);

    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j==i||i + j == a-1||i == j)
            {
                sum += arr[i][j]; 
            }
              
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d",arr[i][j]);
        }
        puts("");
    }

    printf("\tDioganal (+) = %d",sum);
}