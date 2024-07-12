#include <stdio.h>
    int main ()
{
int a,b = 1,c = 1,d = 0;
    puts("\tSonni kiriting . . . ");
    scanf("%d",&a);
    do
    {
        if (a % b == 0)
        {
            printf("\t.Bo'luvchisi %d\n",b);
            d =(d + b);
        }
        b++;
        
    }
    while (b<=a);
        if(a==d-a)puts("\t\tMukammal son !!!");
        else puts("\t\tMukammal son emas");
}