#include <stdio.h>
int main ()
{
    int a,b,c,sum;
    a = 1;
    b = 1000;
    while (a <= b)
    {
        sum = 0;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                sum++;
            }
        
        }
        if (sum == 9)
        {
            printf("( %d )",a);
            puts("");
        }
        a++;
    }
    return 0;
}