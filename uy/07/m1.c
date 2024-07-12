#include <stdio.h>
int main()
{
      int a,b;
	puts("\t1 - sonni kiriting . . . ");
		scanf("%d",&a);
        puts("\t2 - sonni kiriting . . . ");
        	scanf("%d",&b);
      switch(a>b)
{
 case 1:
	printf("\tKatta son = %d \n",a);break;
 case 0:
        printf("\tKatta son = %d \n",b);break;
}
   return 0;
}
