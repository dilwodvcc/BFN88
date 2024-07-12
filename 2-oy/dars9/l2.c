#include <stdio.h>
int abc (int a, int b)
{
    if (a>b)
    {
        return a;
    }
        return b;
}
int main ()
{
    int b,c;
    scanf("%d%d",&b,&c);
    int a=abc(b,c);
    printf("\tmax = %d",a);
}