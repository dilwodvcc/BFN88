#include <stdio.h>
int q (int a ,int b)
{
    return a % b;
}
int main()
{
    int a,c;
    scanf("%d%d",&a,&c);
    int b = q(a,c);
    printf("%d",b);
}