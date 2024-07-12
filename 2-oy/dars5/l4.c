#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d",&a);
	//scanf("%d",&b);
	c = 1;
	b = a;
	while(a!=0)
{
	printf("%d * %d = %d\n",b,c,b*c);
	a--;
	c++;

}
    return 0;
}
