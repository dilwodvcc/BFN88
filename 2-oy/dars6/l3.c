#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d",&a);
	c = 1;
	b = a;
	do{
	printf("%d * %d = %d\n",b,c,b*c);
        a--;
        c++;
}

	while(a!=0);
    return 0;
}
