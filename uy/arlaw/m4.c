#include <stdio.h>

int main()
{
	int min,a,b,c,d,e,f,g,h;
	puts("\t4 xonali son kiriting");
	scanf("%d",&a);
	if(a<10000||a<0)
{
	b = a / 1000;
	c = (a / 100) % 10;
	d = (a / 10) % 10;
	e = a % 10;
	min = b;

	if(c > min)min = b;
	else {min = c;}
	if(d > min)min = b;
	else {min = d;}
	if(e > min)min = b;
	else {min = e;}

	printf("\tEng kichigi = %d ",min);
}
	else puts("\tKiritilgan son 4 xonali son emas");

    return 0;
}
