#include <stdio.h>
int aa(int a)
{
    int b,c,d,e=0;
    do
    {
        b = a % 10;
        c = c + b;
        a/=10;
    }
    while (a>0);
    if (c % 2==0)
    {
        puts("\ttrue");
    }
    else
    {
        for (int i = 1; i <= c; i++)
        {
            if(c%i==0)
            {
                e++;
            }
            if(e==2)
            {
                puts("\tfalse");
                break;
            }
        }
            
    }
}
int main()
{
    int son;
    printf("\tSonni kiriting : ");
    scanf("%d",&son);
    aa(son);
}