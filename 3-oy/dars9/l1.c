#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    FILE *file = fopen("royxat.txt" , "w");

    char ism[32];
    char fam[32];

    printf("\t\tIsmni kiriting : ");
    scanf("%[^\n]s",ism);

    printf("\t\tFamilyangizni kiriting : ");
    scanf(" %[^\n]s",fam);

    fputs(fam, file);
    fputs("  ",file); 
    fputs(ism, file);
    
    fclose(file);
}