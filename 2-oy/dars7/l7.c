#include <stdio.h>
    int main()
    {
    double a,b= 2.500;
    scanf("%lf",&a);
    printf("%lf",a);
    puts("---------");
    for (;a<=2.1;a+=0.1)
    {
        printf("%lf kg = %lf so'm\n",a,a*b);
    }
}