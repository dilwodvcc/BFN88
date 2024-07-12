#include <stdio.h>
void aa(int *ptra)
{
    *ptra*=*ptra;
    printf("\tKvadrati = %d",*ptra);
}
int main ()
{
    int a;
    printf("\tSon kiriting : ");
    scanf("%d",&a);
    aa(&a);
}