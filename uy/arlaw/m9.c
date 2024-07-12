#include <stdio.h>

int main()
{
	char a;
	puts("\tBelgini kiriting . . . ");
	scanf(" %c",&a);
	if(a>='A'&&'Z'>a) printf("\tNatija = %c",(a + 32));
	else if(a >='a'&& 'z'>= a)printf("\tNatija = %c",a - 32);
	else {printf("\t bu harf emas");}
}
