#include <stdio.h>
#include <stdlib.h>
void ptr(int *a,int *b,int *c)
{
    int max = *a;
    if (max < *b)
    {
        max = *b;
    }
    if (max <*c)
    {
        max = *c;
    }

    int min = *a;
    if (min > *b)
    {
        min = *b;
    }
    if (min >*c)
    {
        min = *c;
    }
    int orta = (*a + *b +*c) - (max+min);

    *a = max;
    *b = orta;
    *c = min;
}
int main()
{
    int a,b,c;
    printf("\t a uchun son kiriting : ");
    scanf("%d",&a);
    printf("\t b uchun son kiriting : ");
    scanf("%d",&b);
    printf("\t c uchun son kiriting : ");
    scanf("%d",&c);

    puts("1 - holati");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);

     ptr(&a,&b,&c);

    puts("Almashgan holati");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);

}