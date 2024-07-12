#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d",&a);
	b = a % 10;
	while(a>0)
{
	a/=10;

}

	if(a>b)printf("%d",a);
	else printf("%d",b);
}
