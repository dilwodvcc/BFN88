#include <stdio.h>

int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	scanf(" c%",&c);
	scanf("%d",&b);
	switch(c)
{
 case '+':
	printf("%d + %d = %d ",a,b,a+b);
 case '-':
        printf("%d + %d = %d ",a,b,a-b);
 case '*':
        printf("%d + %d = %d ",a,b,a*b);
 case '/':
        printf("%d + %d = %d ",a,b,a/b);
}

    return 0;
}
