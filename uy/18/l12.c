#include <stdio.h>
int aa(int a ,int b ,int c)
{
    if(a>b&&b>c)
    {
        return b;
    }
    if(a<b&&b<c)
    {
        return b;
    }
    if (a>c&&c>b)
    {
        return c;
    }
    if (a<c&&c<b)
    {
        return c;
    }
    if (c>a&&a>b)
    {
        return a;
    }
    if (c<a&&a<b)
    {
        return a;
    }
    
    
    
}
int main()
{
    int d,e,f,n;
    printf("\t1 - sonni kiriting : ");
    scanf("%d",&d);
    printf("\t2 - sonni kiriting : ");
    scanf("%d",&e);
    printf("\t3 - sonni kiriting : ");
    scanf("%d",&f);
    n = aa (d,e,f);
    printf("\t\t O'rtachasi = %d",n);
}