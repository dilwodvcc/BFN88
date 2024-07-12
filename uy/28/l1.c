#include <stdio.h>
int aa(int a,int b,int c)
{
    if (a+b==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
int main ()
{
    int a,b,c;
    printf("\t1 - son kirit :");
    scanf("%d",&a);
    printf("\t2 - son kirit :");
    scanf("%d",&b);
    printf("\t3 - son kirit :");
    scanf("%d",&c);
    int d = aa(a,b,c);
    printf("%d",d);
}