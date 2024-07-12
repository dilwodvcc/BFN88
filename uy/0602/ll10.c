#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);
    int uz = 0;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        uz++;
    }
    int ar = 100 - uz;
    puts("");
    printf("\t\t%d ta bosh joy bor",ar);
}