#include <stdio.h>
int main ()
{
    int a=20;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if(i==1||j==1||i==a||j==a||i==j&&i>10||i+j==a+1&&i<=10)printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}