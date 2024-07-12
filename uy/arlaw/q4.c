#include <stdio.h>
		int main()
	{//chiroyli chiqishi uchun kop atribut ochdim.
		int a,b,c,d,e,f,g;
		puts("\tT1 = ");
		scanf("%d",&a);
		puts("\tT2 = ");
		scanf("%d",&b);
		puts("\tT3 = ");
		scanf("%d",&c);
		puts("\tV1 = ");
		scanf("%d",&d);
		puts("\tV2 = ");
		scanf("%d",&e);
		puts("\tV3 = ");
		scanf("%d",&f);
		g = (a*d+b*e+c*f)/(d+e+f);
		printf("\tT = %d",g);
	}
