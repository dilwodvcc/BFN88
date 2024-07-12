#include <stdio.h>
void aaa(int a, int b, int count)
{
    if (b > 0)
    {
        if (a % b == 0)
        {
            count++;
        }
       aaa(a,b-1,count);
    }
}
int main ()
{
    int a;
    printf("\tSon kiriting : ");
    scanf("%d",&a);
    int b = a;
    int count = 0;
    aaa(a,b,count);
    if (count == 2)
       {
            printf("\t\tBu son tub : %d",a);
       }
       else
       {
            printf("\t\tBu son tub emas: %d",a);
       }
}