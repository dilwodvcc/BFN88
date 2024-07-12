#include <stdio.h>
void aa(int *ptra)
{
    int c,b,d;
    b = *ptra/10;
    c = *ptra%10;
    d = (c*10)+b;
    *ptra = d;
    
}
int main()
{
    int a;
    printf("\tikki xonali son kiriting :");
    scanf("%d",&a);
    aa(&a);
    printf("\t O'zgargan holati = %d",a);
}