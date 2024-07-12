#include <stdio.h>
int aa(int a ,int b,int sum)
{
    if (b > 0)
    {
        sum *= a;
        return aa(a,b-1,sum);
         
    }
    return sum;
}
int main ()
{
    int a,b;
    printf("\t\tSon kiriting : ");
    scanf("%d",&a); 
    printf("\t\tSon kiriting : ");
    scanf("%d",&b); 
    int sum = 1;
    int c = aa(a,b,sum);
    printf("%d",c);
}