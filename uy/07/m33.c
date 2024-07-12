#include <stdio.h>
int main()
{
      char a;
        puts("\tBelgini kiriting kiriting . . . ");
                scanf("%c",&a);
      switch(a)
{
 case 'a' ... 'z':
        printf("\tNatija kotta harfda = %c ",a-32);break;
 case 'A' ... 'Z':
        printf("\tNatija kichik harfda = %c",a+32);break;
 default: 
	puts("\tBu belgi emas");
}

}
