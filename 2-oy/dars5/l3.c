#include <stdio.h>

int main()
{
        int a,b,c;
	//scanf("%d",&a);
	scanf("%d",&b);
	c =0;
        while(b!=0)
{
	b=b/10;
	c++;
}
		printf("%d\n",c);

    return 0;
}

