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

    char gap[64];

    while (!feof(fr))
    {
        fscanf(fr , " %s" , gap);
    }
    puts(gap);
    fclose(fr);
    return 0;
}