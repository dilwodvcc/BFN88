#include <stdio.h>
		int main()
	{
		float a;
		int b;
		double c;
		char d = 'A';
		puts("\tFloat tipi uchun");
		scanf("%f",&a);
		puts("\tInt tipi uchun");
		scanf("%d",&b);
		puts("\tDouble tipi uchun");
		scanf("%lf",&c);
		puts("\tChar tipi uchun");
		printf("Float = %f \n Int = %d\n Double = %lf\n Char = %c",a,b,c,d);
	}
