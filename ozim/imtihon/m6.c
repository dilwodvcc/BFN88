#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char ism[32];
    char fam[32];
    int  yow;
    char millat[32];
    
}ODAM;
ODAM input()
{
    ODAM odam;
    printf("Ismingizni kiriting : ");
    scanf(" %s",odam.ism);

    printf("Familyangizni kiriting : ");
    scanf(" %s",odam.fam);

    printf("Yowingizni kiriting : ");
    scanf(" %d",&odam.yow);

    printf("Millatingizmi kiriting : ");
    scanf(" %s",odam.millat);

    return odam;
}
int main()
{
    FILE *fw = fopen("info.txt","w");

    ODAM odam[1];
        odam[0] = input();
    for (int i = 0; i < 1; i++)
    {
        fprintf(fw, "Ismingiz          %s\n",odam[i].ism);
        fprintf(fw, "Familyangiz       %s\n",odam[i].fam);
        fprintf(fw, "Yowingiz          %d\n",odam[i].yow);
        fprintf(fw, "Millatingiz       %s\n",odam[i].millat);
    }
    
    fclose(fw);
    return 0;
}