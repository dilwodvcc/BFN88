#include <stdio.h>
#include <string.h>
void aa(char soz[],int a)
{
    if (a < strlen(soz))
    {
        aa(soz,a + 1);
        printf("%c",soz[a]);
    }
    
}
int main ()
{
    char soz[100] = "real madrid";
    aa(soz,0);
}