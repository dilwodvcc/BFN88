#include <stdio.h>
void aa(int a ,int b)
{
    if (0 < b)
    { 
        aa(a,b-1);
    }
    printf("%d ",b);    
}
int main ()
{
    int a,b;
    printf("\t1 - soni kiriting : ");
    scanf("%d",&a);
    puts("");
    while (1)
    {
        printf("\t2 - soni kiriting : ");
        scanf("%d",&b);
        if (a<=b)
        {
            printf("\t\tTo'g'ti kiridingiz !");
            break;
        }
        printf("\t\tQayta kiriting !\n");
    }
        aa(a,b);
}