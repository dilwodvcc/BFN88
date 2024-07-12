#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);
    int a = 0;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isdigit(arr[i]))
        {
            a = a + (arr[i] % 16);
            printf("%c  ",arr[i]);
        }
        puts("");
    }
    printf("\t\tYig'indi = %d",a);
}