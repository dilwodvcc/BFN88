#include <stdio.h>

int main()
{
	int a=45,b=120,c=0;
	do
{
	if(a%18==0){
	c = c+a;}
	a++;
}
	while(a<=b);
	printf("%d",c);
    return 0;
}
