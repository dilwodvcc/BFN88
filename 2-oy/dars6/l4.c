#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d",&a);
	b = a % 10;
	do{a/=10;}
	while(a>0);
	if(a>b)printf("%d",a);
	else printf("%d",b);
}
