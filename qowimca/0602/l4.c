#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isupper(arr[i]))
        {
            printf("%c",arr[i]);
        }
        
    }
    puts("");

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (islower(arr[i]))
        {
            printf("%c",arr[i]);
        }
        
    }
    puts("");

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isdigit(arr[i]))
        {
            printf("%c",arr[i]);
        }
        
    }
    puts("");

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isspace(arr[i]))
        {
            printf("--%c",arr[i]);
        }
    }
    puts("");

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (ispunct(arr[i]))
        {
            printf("%c",arr[i]);
        }
        
    }
    puts("");
}