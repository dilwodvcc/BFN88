#include <stdio.h>
    int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    puts("---------");
    for (;a<=b;b--)
    {
        c+=1;
        printf("%d\n",b);
    }
    printf("%d ta son\n",c);
}