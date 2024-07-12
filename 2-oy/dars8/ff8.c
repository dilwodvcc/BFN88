#include <stdio.h>
int main ()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int a = 1; a <= 5; a++)
        {
            if(i==1||a==1||i==5||a==5||i>=a)printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}