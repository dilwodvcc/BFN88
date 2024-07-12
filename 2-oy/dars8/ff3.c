#include <stdio.h>
int main ()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}