#include <stdio.h>
#include <stdlib.h>
int main ()
{
    FILE *file = fopen("a.txt" , "r");
    system("cls");

    if (file == NULL)
    {
        printf("\tBunday file yo'q");
        exit(1);
    }
    
    char a[32];
        fscanf(file, "%s",a);
        puts(a);
        puts(a);
    fclose(file);
}