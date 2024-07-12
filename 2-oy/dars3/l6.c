#include <stdio.h>
		int main()
	{
		int a,b,c,count,count2;
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		count = 0;
		count2 = 0;
		if (a>0)count = count+1;
		else count2=count2+1;
		if (b>0)count = count+1;
		else count2=count2+1;
		if (c>0)count = count+1;
		else count2=count2+1;
		printf("%d ta musbat\n",count);
		printf("%d ta manfiy",count2);
	}
