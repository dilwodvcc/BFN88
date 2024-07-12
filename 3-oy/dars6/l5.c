#include <stdio.h>
void aa(int a, int b)
{
    printf("%d * %d = %d",a,b,a*b);
        puts("");
    if (10 > b)
    {
        aa(a,b+1);
        
    }       
}
int main ()
{
    int a,b = 1;
    printf("\t\tSon kiriting : ");
    scanf("%d",&a);
    aa(a,b);
}