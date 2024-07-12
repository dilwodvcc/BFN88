#include <stdio.h>

int main()
{
	int a=1,b;
	scanf("%d",&b);
	do{
	printf("%d\n",a*a);
	a++;
	}
	while(a*a<=b);
    return 0;
}
