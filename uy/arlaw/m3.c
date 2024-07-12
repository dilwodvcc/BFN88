#include <stdio.h>

int main()
{
    int a,b,c;
	puts("\t1 - tomon");
	scanf("%d",&a);
	puts("\t2 - tomon");
	scanf("%d",&b);
	puts("\t3 - tomon");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a)puts("\tHa");
	else puts("\tYo'q");
    return 0;
}
