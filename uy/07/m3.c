#include <stdio.h>
int main()
{
      char a;
        puts("\tBelgini kiriting kiriting . . . ");
                scanf("%c",&a);
	if(a >= 'a' && a <= 'z'||a >= 'A' && a <= 'Z')
{
      switch(a>= 'a' && a<= 'z')
{
 case 1:
        printf("\tNatija kotta harfda = %c ",a-32);break;
 case 0:
        printf("\tNatija kichik harfda = %c",a+32);break;
}

}
	else puts("\tBu belgi emas");

}
