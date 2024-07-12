#include <stdio.h>
int aa (int d, int c)
{
    return d*c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s = aa (a,b);
    printf("%d",s);
}