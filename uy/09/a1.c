#include <stdio.h>
int main()
{
	int a,b,c;
	puts("\tSonni kiriting");
	scanf("%d",&a);
	c = 0;
	b = 1;
		while(b<=a)
	{

		if(a%b==0) {c++;}
		b++;

	}

 if(c == 2){puts("\tBu son tub");}
 else {puts("\tBu son tub emas !");}


}
