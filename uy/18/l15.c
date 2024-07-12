#include <stdio.h>
int aa(int b)
{
    int c=0;
    for (int i = 1; i < b; i++)
    {
       if(b % i == 0)
       {
        c+=i;
       }  
    }
    if (c==b)
       {
        puts("\ttrue");
       }
       else
       {
        puts("\tfalse");
       }
}
int main ()
{
    int a;
    printf("\t Son kiriting : ");
    scanf("%d",&a);
    aa (a);
}