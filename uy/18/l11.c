#include <stdio.h>
void aa (int a, int b)
{
    if(a<b)
    {
            puts("\t\t a<b");
        for (a; a <= b; b--)
        {
            printf("%d ",b);
        }
        
    }
    else
    {
            puts("\t\t a>b");
        for (a; a <= b; a++)
        {
            printf("%d ",a);
        }
    }
}
int main ()
{
    int d,c;
    printf("\t1 - sonni kiriting : ");
    scanf("%d",&c);
    printf("\t2 - sonni kiriting : ");
    scanf("%d",&d);
    aa(c,d);

}