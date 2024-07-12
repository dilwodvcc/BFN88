#include <stdio.h>
int main () 
{
	char belgi;

	puts("belgi kiriting: ");
	scanf(" %c",&belgi);
	switch(belgi)
{
	case 'A' ... 'Z':
		printf("%c", belgi + 32);break;
	case 'a' ... 'z':
		printf("%c", belgi - 32);break;
 	default:
		puts("bunday belgi yoq");
}
return 0;
}
