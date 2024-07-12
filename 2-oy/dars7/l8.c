#include <stdio.h>
    int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    puts("---------");
    for (;a<=b;b--)
    {
        c+=b;
        printf("%d\n",b);
    }
    printf("yigindi =  %d\n",c);
}