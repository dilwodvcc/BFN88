#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	c = 1;
	do
{
	c = c*a;
	a--;
}
	while(1<=a);
	printf("%d",c);
    return 0;
}
