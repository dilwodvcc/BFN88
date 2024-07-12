#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a%3==0&&a%5==0)puts("fizz buzz");
	else
	{
	if(a%3==0)puts("fizz");
	if(a%5==0)puts("buzz");
	}

}
