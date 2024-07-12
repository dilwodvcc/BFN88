#include <stdio.h>
void aa(double *ptra)
{
    *ptra = (int)(*ptra);
}
int main ()
{
    double a;
    printf("\t son kirit :");
    scanf("%lf",&a);
    aa (&a);
    printf("\tO'zgargan holati = %f",a);
}