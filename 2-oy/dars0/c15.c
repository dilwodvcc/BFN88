
#include <stdio.h>
int main()
{
	int r,h;
	float pi;
	pi = 3.14;
	scanf("%d", &r);
	scanf("%d", &h);
	printf("%g*(%d^2)*%d = %g",pi,r,h,pi*(r*r)*h);
}
