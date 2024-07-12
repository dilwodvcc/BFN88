#include <stdio.h>
#include <math.h>
double aa( double c ,int d)
{
    printf("%.2lf",pow(c,d)); 
}
int main ()
{
    int a;
    double b;
    printf("\tHaqiyqiy son kiriting : ");
    scanf("%lf",&b);
    printf("\tButun son kiriting : ");
    scanf("%d",&a);
    printf("\t\tNAtija = ");
    aa (b,a);
}