#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100];
    scanf(" %[^\n]s",a);
    int c = 0;
    for (int i = 0; i < a[i] != '\0'; i++)
    {
        if (a[i]=='a')
        {
            c++;
        }
    }
    printf("%d ta",c);
}