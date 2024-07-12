#include <stdio.h>
int q (int a)
{
    a = a % 8;
}
int main()
{
    int a;
    scanf("%d",&a);
    int b = q(a);
    printf("%d",b);
}