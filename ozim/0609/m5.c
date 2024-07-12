#include <stdio.h>
int aaa (int a ,int sum)
{
        if (a > 0)
    {
        sum += a % 10;
        return aaa(a/10,sum);
         
    }
    return sum;
}
int main ()
{
    int a;
    printf("\t\tSon kiriting : ");
    scanf("%d",&a); 
    int sum = 0;
    int c = aaa(a,sum);
    printf("%d xonali",c);
}