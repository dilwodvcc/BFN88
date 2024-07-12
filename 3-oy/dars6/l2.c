#include <stdio.h>
void aa(int a)
{
    
    if (a >= 1)
    {
        aa(a - 1);
        if (a % 2)
        {
            printf("%d ,",a);
        }
    }
    
}
int main ()
{
    int a;
    printf("\t\tSon kirit : ");
    scanf("%d",&a);
    aa(a);
}