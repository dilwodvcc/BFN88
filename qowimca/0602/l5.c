#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%s",arr);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'A' || arr[i] =='O' || arr[i] == 'U' || arr[i] =='I' || arr[i] == 'E')
        {
                printf("%c",arr[i]); 
        }
    }
    return 0;
}