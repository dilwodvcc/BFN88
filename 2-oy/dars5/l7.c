#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	c = 0;
	while(a>0)
{
	c = c+(a%10);
	a/=10;
}
	printf("%d",c);
    return 0;
}
