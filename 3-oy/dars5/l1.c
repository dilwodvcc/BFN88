#include <stdio.h>
#include <string.h>
int main ()
{
    char ism[100] = "Aziz";
    char fam[100] = "Shokirov";
    char nat[100] = "";
    strcat(nat, fam + strlen(fam) / 2);
    strcat(nat, ism + strlen(ism) / 2);
    puts(nat);
}