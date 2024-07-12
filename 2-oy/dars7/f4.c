#include <stdio.h>
int main()
{
    int a,b,c;
    puts("\tSon kiriting . . .");
    scanf("%d",&b);
    puts("---------");
    c = b*2-1;
    printf("%d^2 = 0",b);
    for (a=1;a<=c;a++)
    {
        if(a%2==0){}
        else{ printf("+%d",a);}
    }
}