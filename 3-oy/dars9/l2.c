#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool unlimi(char harf)
{
    harf = tolower(harf);

    if (harf == 'a' ||harf == 'i' ||harf == 'e' ||harf == 'o' ||harf == 'u')
    {
        return true;
    }
        return false;
}

int main ()
{

    FILE *file = fopen("a.txt",file);

    char gap[64] = "";
    printf("\tGap kiriting : ");
    scanf("%[^\n]s",gap);

    for (int i = 0; i < strlen(gap); i++)
    {
        if (unlimi(gap[i]))
        {
            fputc(gap[i],file);
            fputc("--",file);
        }
        
    }
    
    for (int i = 0; i < strlen(gap); i++)
    {
        if (unlimi(gap[i]) == false && isalpha(gap[i]))
        {
            fputs(gap[i],file);
        }
        
    }
    fclose(file);
}