#include <stdio.h>

int main()
{
        int a,b,s=0,c;
        scanf("%d",&a);
	c = a;
        do
{
        b=a%10;
	a/=10;
	s = s + b;
}
        while(a>0);
	printf("%d\n",s);
        printf("%d",c%s);
    return 0;
}
