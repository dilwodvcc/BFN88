#include <stdio.h>
int main()
{
    double a,b,c=1; // ikkigaca oliwi uchun 2.1 kiritisw kerak
    //bu duble xatosi ustoz shunaqa dedi
    puts("\tSon kiriting . . .");
    scanf("%lf",&b);
    for (a=1.1;a<=b;a+=0.1)
    {
        c*=a;
        printf("%g",a);
    }
    printf("\t Yig'indi = %lf",c);
}