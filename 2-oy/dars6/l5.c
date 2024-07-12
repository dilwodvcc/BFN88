#include <stdio.h>

int main()
{
	char a;
	a = 'a';
	do
{
	printf("%c",a);
	a+=1;
}
	while(a<='z');
    return 0;
}
