#include <stdio.h>
int main ()
{
    
    for (int i = 1; i <= 4; i++)
    {
        int a=1;
        for (int j = 1; j <= 4; j++)
        {
            if (i==4||j==3&&i==3)
            {
                printf("%d ",a);
            }
            else
            {
                printf(" ");
            }
            a++;
        }
        printf("\n");
    }
    
}