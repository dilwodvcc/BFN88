#include <stdio.h>
int aa(int a ,int sum)
{
    if (a > 0)
    {
        sum++;
        return aa(a/10,sum);
         
    }
    return sum;
}
int main ()
{
    int a;
    printf("\t\tSon kiriting : ");
    scanf("%d",&a); 
    int sum = 0;
    int c = aa(a,sum);
    printf("%d xonali",c);
}