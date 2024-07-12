#include <stdio.h>

int main()
{
	int a,b;
	char c;
	puts("\tSoni kiriting . . . ");
	scanf("%d",&a);
	puts("\tBelgini kiriting . . . ");
	scanf(" %c",&c);
	puts("\tSoni kiriting . . . ");
        scanf("%d",&b);
    if(c=='+') printf("%d+%d=%d",a,b,a+b);
    if(c=='-') printf("%d-%d=%d",a,b,a-b);
    if(c=='*') printf("%d*%d=%d",a,b,a*b);
    if(c=='/') printf("%d/%d=%d",a,b,a/b);
}
