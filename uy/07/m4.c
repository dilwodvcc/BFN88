#include <stdio.h>
int main()
{
      int a;
        puts("\tHaroratni kiriting . . . ");
                scanf("%d",&a);
      switch(a)
{
 case -999 ... -1:
        puts("\tO'ta sovuq");break;
 case 0 ... 10:
        puts("\tJuda sovuq");break;
 case 11 ... 20:
        puts("\tSovuq");break;
 case 21 ... 30:
        puts("\tNormal");break;
 case 31 ... 40:
        puts("\tIssiq");break;
 case 41 ... 999:
        puts("\tJuda issiq");break;
 default:
	puts("\tOdam yashab bolmaydigan harorat");
}

}
