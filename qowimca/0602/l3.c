#include <stdio.h>
#include <ctype.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%[^\n]s",arr);
    int ra = 0;
    int be = 0;
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (isdigit(arr[i]))
        {
            ra++;
        }
        
    }
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        if (islower(arr[i]))
        {
            be++;
        }
        
    }

    int um = be + ra;
    puts("");
    printf("%d ta belgi va raqam bor",um);
}