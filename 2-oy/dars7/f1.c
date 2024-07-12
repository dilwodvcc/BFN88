#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c=0;
    puts("\tSon kiriting . . .");
    scanf("%d",&b);
    c = pow((2*b),2);
    for (a=1;a<=b;a++)
    {
        c+=(a*a);
    }
    printf("\t Yig'indi = %d",c);
}