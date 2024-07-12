#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char ism[50];
    char familya[50];
    int yoshi;
    char jinsi[10];
    char kasbi[50];
    char shahri[50];
    bool oilali;
    char millati[50];
    char pasport_seriyasi[20];
    char telefon_raqami[20];
} Odam;

void odam_malumotlarini_kiritish(Odam *odam) {
    printf("Ism: ");
    scanf("%s", odam->ism);
    printf("Familya: ");
    scanf("%s", odam->familya);
    printf("Yoshi: ");
    scanf("%d", &odam->yoshi);
    printf("Jinsi: ");
    scanf("%s", odam->jinsi);
    printf("Kasbi: ");
    scanf("%s", odam->kasbi);
    printf("Shahri: ");
    scanf("%s", odam->shahri);
    printf("Oilali (1 - ha, 0 - yo'q): ");
    scanf("%d", (int*)&odam->oilali);
    printf("Millati: ");
    scanf("%s", odam->millati);
    printf("Pasport seriyasi: ");
    scanf("%s", odam->pasport_seriyasi);
    printf("Telefon raqami: ");
    scanf("%s", odam->telefon_raqami);
}

void dasturchi_erkaklarni_chiqarish(Odam odamlar[], int n) {
    printf("Dasturchi erkaklar:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(odamlar[i].kasbi, "dasturchi") == 0 && strcmp(odamlar[i].jinsi, "erkak") == 0) {
            printf("Ism: %s\n", odamlar[i].ism);
            printf("Familya: %s\n", odamlar[i].familya);
            printf("Yoshi: %d\n", odamlar[i].yoshi);
            printf("Shahri: %s\n", odamlar[i].shahri);
            printf("Oilali: %s\n", odamlar[i].oilali ? "Ha" : "Yo'q");
            printf("Millati: %s\n", odamlar[i].millati);
            printf("Pasport seriyasi: %s\n", odamlar[i].pasport_seriyasi);
            printf("Telefon raqami: %s\n", odamlar[i].telefon_raqami);
            printf("\n");
        }
    }
}

int main() {
    Odam odamlar[2];

    for (int i = 0; i < 2; i++) {
        printf("Shaxs %d uchun ma'lumotlarni kiriting:\n", i + 1);
        odam_malumotlarini_kiritish(&odamlar[i]);
        printf("\n");
    }

    dasturchi_erkaklarni_chiqarish(odamlar, 2);

    return 0;
}
