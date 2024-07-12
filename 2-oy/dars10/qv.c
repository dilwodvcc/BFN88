#include <stdio.h>
int aaa(int b)
{
    for (int i = 1; i <= b; b--)
    {
        puts(" ");
       for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",b,i,i*b);
    }
    }
    
    
}
int main ()
{
    int a;
    printf("\tSon kiriting : ");
    scanf("%d",&a);
    aaa(a);
}