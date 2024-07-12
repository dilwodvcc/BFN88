#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
    char gap[100] = "";

    scanf(" %[^\n]s",gap);
    int a = strlen(gap);
    for (int i = 0; i < a; i++)
    {
        if (islower(gap[0]))
        {
            gap[0] = toupper(gap[0]);
        }
    }
    strcat(gap, ".");
    puts(gap);
}