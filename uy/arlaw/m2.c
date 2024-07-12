#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	if(100<a)puts("\tSiz bebahosiz");
	if(a>20&&40>a)puts("\tBahoingiz 2 ");
	if(a>40&&60>a)puts("\tBahoingiz 3 ");
	if(a>60&&80>a)puts("\tBahoingiz 4 ");
	if(a>80&&100>a)puts("\tBahoingiz 5 ");
	if(a<20)puts("\tBahoingiz yetarli emas ");
    	return 0;
	//20 ball yig'olmasa bahoingiz yetmaydi deb o'zim qo'shdim
}
