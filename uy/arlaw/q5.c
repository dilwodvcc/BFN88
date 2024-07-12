#include <stdio.h>
		int main()
	{
		int a,b,c,d,e,f;
		puts("\tSummani kiriting . . . ");
		scanf("%d",&a);
		b = a / 11000;
		c = a - (11000*b);
		d = c / 100;
		f = c - (100*d);
		e = b + d;
		printf("\t%d $ %d sent",e,f);
		
		
		
	}
