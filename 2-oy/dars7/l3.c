#include <stdio.h>
    int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    puts("---------");
    for (;a<=b;a++)
    {
        c+=1;
        printf("%d\n",a);
    }
    printf("%d ta son\n",c);
}