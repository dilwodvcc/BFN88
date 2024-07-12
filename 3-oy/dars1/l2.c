#include <stdio.h>
void aa (int *ptra)
{
    printf("a ning adresi = %p",&ptra);
}
int main ()
{
    int a;
    aa(a);
