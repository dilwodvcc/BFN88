#include <stdio.h>

int main()
{
        int a=34,b=88,c=0,d;
        do
{
	if(a%7==0&&a%2==0){
        printf("%d\n",a);
	c = c+a;}
        a++;
}
        while(a<=b);
	printf("%d\n",c);
    return 0;
}


