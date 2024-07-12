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
            arr[i] = toupper(arr[i]);
        }
        else
        {
            if (isupper(arr[i]))
            {
                arr[i] = tolower(arr[i]);
            }
            
        }
        
    }
    puts("");
    printf("\t\tNatija = %s",arr);
}