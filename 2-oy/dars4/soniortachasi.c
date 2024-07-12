#include <stdio.h>
int main()
{
        float a,b,c;
        scanf("%g",&a);
        scanf("%g",&b);
        scanf("%g",&c);
	if(a>b&&b>c)printf("%g",b);
	if(b>a&&a>c)printf("%g",a);
	if(c>a&&a>b)printf("%g",a);
	if(c>b&&b>a)printf("%g",b);
	if(a>c&&c>b)printf("%g",c);
	if(b>c&&c>a)printf("%g",c);
}
