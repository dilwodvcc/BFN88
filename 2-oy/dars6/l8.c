#include <stdio.h>

int main()
{
        int a,b,c,d;
        scanf("%d",&a);
	scanf("%d",&b);
        c = 1;
        do
{
        c = c * a ;
        b--;
}
        while(0<b);
        printf("%d",c);
    return 0;
}
