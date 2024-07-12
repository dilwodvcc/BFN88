#include <stdio.h>
#include <string.h>
int main ()
{
    char ism[100] = "";
    char fam[100] = "";
    char nat[100] = "";
    char prt[100] = "";
    printf("\t\tIsmingizni kiriting :");
    scanf(" %[^\n]s",ism);
    printf("\t\tFamilyangizni kiriting :");
    scanf(" %[^\n]s",fam);
    strcat(nat, ism);
    strcat(nat, " ");
    strcat(nat, fam);
    strcat(prt, fam);
    strcat(prt, " ");
    strcat(prt, ism);
    puts("");
    puts(nat);
    puts("");
    puts(prt);
    puts("");
}