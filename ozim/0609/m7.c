#include <stdio.h>
#include <string.h>
int main ()
{
    char gap[100];
    int stop = 0,start = 0,m1 = 0, m2 = 0;

    scanf("%[^\n]s",gap);
    for (int i = 0;gap[i] != '\0'; i++)
    {
        if (gap[i] == ' '&& gap[i+1] != ' ')
        {
            start = i;
        }
        
        else if (gap[i] == ' ' && (gap [i+1] != ' ' ||gap[i+1] == '\0'))
        stop = i;
    }
    if (m1 != 0)
    {
        m1++;
    }
    for (int i = 0; gap[i] != '\0'; i++)
    {
        printf("%c",gap[i]);
    }
    
}