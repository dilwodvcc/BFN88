#include <stdio.h>
int main ()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int a = 1; a <= 10; a++)
        {
            if(i==1||a==1||i==10||a==10||i<a&&i<=5&&a<=5||i+a<=10&&i<=5&&a>5)printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}