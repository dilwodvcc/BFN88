#include <stdio.h>
    int main()
    {
    double a,b= 2.500;
    scanf("%lf",&a);
    puts("---------");
    for (;a<=1;a+=0.1)
    {
        printf("%g kg = %g so'm\n",a,a*b);
    }
    }