#include <stdio.h>
void almaw(int *ptra,int *ptrb)
{
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}
int main ()
{
    int a = 10;
    int b = 20;

    puts("1 - holati");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    puts("");

    almaw(&a,&b);

    puts("almashgan holati");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}