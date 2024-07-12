#include <stdio.h>
void aaa(int a)
{
    printf("%c ",a);
    if (a < 'z')
    {
        aaa(a+1);
    }
}
int main ()
{
    char a;
    while (1)
    {
        printf("\t\tHarf kirting : ");
        scanf(" %c",&a);
        puts("");
        if (a >= 'a' && a <= 'z')
        {
            printf("\tTo'g'ri kiriting !\n");
            break;
        }
        printf("\tNoto'g'ri kiritdingiz !");
    }
    aaa(a);
    
}