#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    int count = 0;
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (ispunct(arr[i]))
        {
            count++;
        }
        
    }
    printf("%d ta belgi bor",count);
}