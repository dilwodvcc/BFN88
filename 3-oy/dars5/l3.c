#include <stdio.h>
#include <string.h>
int main ()
{
    char stp[100] = "stop";
    char kir[100] = "";
    char nat[100] = "";
    int sum = 0;
    do
    {
        scanf(" %[^\n]s",kir);
        sum++;
        if (strcmp(kir,stp) == 0 )
        {
            break;
        }
        if (sum == 5)
        {
            strcat(nat, ".");
        }
        
        strcat(nat, kir);
        strcat(nat, " ");
    } while (1);
    puts(nat );
}