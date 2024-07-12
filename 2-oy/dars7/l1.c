#include <stdio.h>
    int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    do{
        b = (a/10)%10;
        c = a%10;
        if(c==b){puts("bor");break;}
        else a/=10;
    }
    while (a>0);
    puts("yoq");
}