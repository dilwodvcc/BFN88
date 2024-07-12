#include <stdio.h>
#include <stdlib.h>
int main ()
{
    system("cls");
    FILE *fr = fopen("dars.txt","r");

    if (fr == NULL)
    {
        printf("\tBunday file yo'q");
        exit(1);
    }

    char soz[64];
    int a = 0;
    while (!feof(fr))
    {
        fscanf(fr , "%s" , soz);
        a++;
        if (a == 2)
        {
            break;
        }
    }
    puts(soz);
    puts(soz);
    fclose(fr);
    return 0;
}