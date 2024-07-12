#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (islower(arr[i]))
        {
            arr[i] -= 32;
        }
        
    }
    puts("");
    printf("\t\tNatija = %s",arr);
}