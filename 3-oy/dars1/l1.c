#include <stdio.h>
int main ()
{
    int a=5;
    printf("\ta ning qiymati = %d\n", a);
    printf("\ta ning adresi = %p\n",&a);

    int *ptr;
    ptr = &a;
    *ptr=*ptr*2;
    printf("\tptr qiymati = %p\n",ptr);
    printf("\tptr adrei = %p\n",&ptr);
    printf("\to'zgargan holati = %d\n",*ptr);

}