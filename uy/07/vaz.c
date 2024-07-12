#include <stdio.h>
int main()
{
	int a,b,c;
	puts("oy kirit");
	scanf("%d",&a);
	puts("kun kirit");
	scanf("%d",&b);
 switch(a)
{
 case 1:
	printf("%d",(30*4+31*6+29)-b);break;
 case 3:
	printf("%d",(30*4+31*5)-b);break;
 case 5:
	 printf("%d",(30*3+31*4)-b);break;
 case 7:
	 printf("%d",(30*2+31*3)-b);break;
 case 8:
	 printf("%d",(30*2+31*2)-b);break;
 case 10:
	 printf("%d",(30+31)-b);break;
 case 12:
	printf("%d",31-b);break;
 case 2:
	printf("%d",(29+31*6+30*3)-b);break;
 case 4:
	 printf("%d",(30*3+31*5)-b);break;
 case 6:
	 printf("%d",(30*2+31*4)-b);break;
 case 9:
	 printf("%d",(30+31*2)-b);break;
 case 11:
	 printf("%d",(30+31)-b);break;
}

}

