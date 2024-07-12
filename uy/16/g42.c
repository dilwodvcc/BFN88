#include <stdio.h>
int main()
{
    int a=20;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
           if (i==1||j==1||i==a||j==a||i+j<=a+1&&i>a/2||i>=j&&i<=a/2)
           {
                printf("* ");
           }
            else
            {
                printf("  ");
            }   
        }
        printf("\n");
    }
    return 0;
}