#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    int a = 0;
    int b = 0;    
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);

    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isalpha(arr[i]))
        {
            a++;
        }
        else
        {
            if (isdigit(arr[i]))
            {
                b++;
            }    
        }
    }
    printf("%d - ta raqam\n%d - ta harf",b,a);
}