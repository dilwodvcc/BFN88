#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=pow(10,9)*2;
    if (a<c&&b<c)
    {
      	if(a==b){
        printf(" %c",'=');}
      	else{if(a>b){printf(" %c",'>');}
             else{printf(" %c",'<');}
    }
    }
}