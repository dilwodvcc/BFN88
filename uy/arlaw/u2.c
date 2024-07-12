#include <stdio.h>
		int main ()
	{
		int a,b,c,d,e;
		puts("\tsonni kiriting . . . "); 
		scanf("%d",&a); 
		b = a/100;
		c = (a/10)%10; 
		d = a%10;
		e = b+c+d;
		printf("\traqamlar yig'ndisi = %d",e);
	}
