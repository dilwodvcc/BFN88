#include <stdio.h>
void aa(int a)
{
    
    if (a >= 1)
    {
            if (a % 2 == 0)
        {
            printf("%d ,",a);
        }
        aa(a - 1);
    }
    
}
int main ()
{
    int a;
    printf("\t\tSon kirit : ");
    scanf("%d",&a);
    aa(a);
}