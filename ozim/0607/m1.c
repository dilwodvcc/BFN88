#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c =pow(10,9);
    if (a<c&&b<c)
    {
        printf("%d",a+b);
    }
    puts("");
    printf("%d",c);
}