#include <stdio.h>
int q (int a ,int b)
{
    if (a>b)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,c;
    scanf("%d%d",&a,&c);
    int b = q(a,c);
    printf("%d",b);
}