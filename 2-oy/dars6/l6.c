#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	c = 0;
	do
{
	c = c+(a%10);
	a/=10;
}
	while(a>0);
	printf("%d",c);
    return 0;
}
