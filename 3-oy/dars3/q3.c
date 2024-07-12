#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f;
    a = 5;
    b = 50000;
    while (a <= b)
    {
        c=0;
        d=0;
        for (int i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                c=c+i;
            }
        
        }
        for (int i = 1; i < c; i++)
        {
            if (c % i == 0)
            {
                d=d+i;
            }
        }
        if (a == d)
        {
            printf("%d ---> %d ",a,c);
            puts("");
        }
        a++;
    }
    return 0;
}