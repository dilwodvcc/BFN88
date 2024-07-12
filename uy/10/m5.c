#include <stdio.h>
    int main()
{
    int a,b,c = 0,e;
    puts("\tSonni kiriting . . .");
    
    do
    {
        if(a <= 0)break;
        else {
            scanf("%d",&a);
             if(a>0)b++;
             c += a;
           
        }
    }
    while(a);
    float d = c / b;
    printf("\t\tYig'indisi = %d",c);
    printf("\t\tO'rtacha arifmetigi = %g",d);
    printf("\t\tSon miqdori = %d",b);
}