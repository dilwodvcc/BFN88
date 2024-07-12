#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct 
{
    char nomi[32];
    int  soni;
    short qavat;
    char tur[32];
}MARKET;
void giper (MARKET giper[],int a)
{
    for (int i = 0; i < a; i++)
    {
        if (strcmp(giper[i].tur,"gipermarket") == 0 && giper[i].qavat >2)
        {
             puts("");
        printf("Nomi    : %s",giper->nomi);
        printf("Soni    : %d",giper->soni);
        printf("Qavati  : %hd",giper->qavat);
        printf("Turi    : %s",giper->tur);
            puts("");
        }
        
    }
    
}

MARKET input ()
{
    MARKET a;
    printf("Nomini kiriting :");
    scanf(" %[^\n]s",a.nomi);

    printf("Sonini kiriting :");
    scanf("%d",&a.soni);

    printf("Qavatini kiriting :");
    scanf("%hd",&a.qavat);

    printf("Turini kiriting :");
    scanf(" %[^\n]s",a.tur);

    return a;
}
int main ()
{
    int a;
    printf("\tQancha odam kiritishi belgilang : ");
    scanf("%d",&a);

    MARKET *mar = malloc((++a) * sizeof(MARKET));

    for (int i = 0; i < a; i++) {
        printf("Shaxs %d uchun ma'lumotlarni kiriting:\n", i + 1);
        input(&mar);
        printf("\n");
    }

    giper(mar, a);

    free(mar);
    return 0;
}
