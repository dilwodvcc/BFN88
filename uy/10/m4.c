#include <stdio.h>
    int main()
{
    int a,b = 1,c = 1,d;
    puts("\tSonni kiriting . . . ");
    scanf("%d",&a);
    do
    {
        if (a % b == 0)
        {
            printf("\t%d.Bo'luvchisi %d\n",c,b);
            c++;
        }
        b++;
        
    }
    while (b<=a);
            printf("\t\tJami bo'luvchisi  %d  ta",--c);
}
    