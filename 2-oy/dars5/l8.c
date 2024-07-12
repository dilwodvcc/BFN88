#include <stdio.h>

int main()
{
	int a,b, max;
	scanf("%d",&a);
	max=a%10;
	while(a>0)
{
	a/=10;
	b=a%10;
	if(max>b);
	else max=b;
}
	printf("%d",max);
    return 0;
}
