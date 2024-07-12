#include <stdio.h>
int func(int a,int sum)
{
    if (a > 1)
    {
        return func(a-1,sum*a);
    }
    return sum;
}
int main ()
{
    int a,b;
    printf("\tSon kiriting : ");
    scanf("%d",&a);
    b = a;
    int sum = func(a,1);
    printf("\tBerilgan %d! = %d",b,sum);
    return 0;
}