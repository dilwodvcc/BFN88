#include <stdio.h>
		int main()
	{
		int a;
		scanf("%d",&a);
		if(a>0)printf("%d",a+1);
		else 
                if(a<0) printf("%d",a-2);
		else  if(a==0) a=10; printf("%d",a);
	}
