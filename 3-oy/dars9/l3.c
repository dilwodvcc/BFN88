#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char ism[32];
    char familiyasi[32];
    int yoshi;
    float boyi;
    char millati[32];
    float vazni;
}MAN;

void input (MAN *man)
{
    printf("Ismingizni kiriting : ");
    scanf(" %s",man->ism);
    printf("Familyangizni kiriting : ");
    scanf(" %s",man->familiyasi);
    printf("Yoshingizni kiriting : ");
    scanf("%d",&man->yoshi);
    printf("Bo'yingizni kiriting : ");
    scanf("%g",&man->boyi);
    printf("Millatingizni kiriting : ");
    scanf(" %s",man->millati);
    printf("Vazningizni kiriting : ");
    scanf("%g",&man->vazni);
}
int main ()
{
    MAN man;
    FILE *file = fopen("aa.txt", "w");
    input (&man);
fprintf(file,"Isming : %s\n", man.ism);
fprintf(file,"Familyang : %s\n", man.familiyasi);    
fprintf(file,"Yoshing : %d yosh\n", man.yoshi);
fprintf(file,"Bo'ying : %g sm\n", man.boyi);
fprintf(file,"Millating : %s\n", man.millati);
fprintf(file,"Vazning : %g kg\n", man.vazni);    
    fclose(file);
}