#include <stdio.h>
int main ()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int a = 1; a <= 5; a++)
        {
            if(i==1||a==1||i==5||a==5||i==a&&i<=3||i+a==5+1&&i<=3)printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}