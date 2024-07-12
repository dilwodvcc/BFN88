#include <stdio.h>
		int main ()
	{
		int a,b,c,d,e;
		puts("\tSekundni kiriting . . . ");
		scanf("%d",&a);
		b = a / 3600;
		c = a -(b*3600);
		d = c / 60;
		e = c - (d*60);
		printf("\t%d soat %d minut %d sekund",b,d,e);
	}
