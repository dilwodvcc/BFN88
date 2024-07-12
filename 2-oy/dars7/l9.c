#include <stdio.h>
    int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    scanf("%d",&b);
    puts("---------");
    for (;a<=b;b--)
    {
        d = b*b;
        c+=d;
        printf("%d\n",b);
    }
    printf("yigindi =  %d\n",c);
}