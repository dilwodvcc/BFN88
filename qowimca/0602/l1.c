#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);
    int ha = 0;
    int ra = 0;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isupper(arr[i]))
        {
            ha++;
        }
        else
        {
            if (islower(arr[i]))
            {
                ha++;
            }
            
        }
        
    }
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isdigit(arr[i]))
        {
            ra++;
        }
    }
    int d = ra - ha;
    puts("");
    printf("\t\t%d ta harf bor",ha);
    printf("\t\t%d ta raqam bor",ra);
    printf("\t\t%d - %d = %d",ra,ha,d);
}