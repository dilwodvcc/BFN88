#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d",&a);
	switch(a%3==0 && a%6!=0)
	{
		case 1:
			puts("good");
			break;
		case 0:
			puts("Bad");
			break;
	}
    return 0;
}
