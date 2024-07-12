#include <stdio.h>

int main()
{
	char a;
	scanf(" %c",&a);
	switch(a)
{
 case 'a':
 case 'e':
 case 'o':
 case 'u':
 case 'i':
	puts("unli harf");break;
 default:
	puts("undosh harf");
}

    return 0;
}
