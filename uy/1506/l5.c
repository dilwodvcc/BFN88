#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Ismingizni kiriting: ");
    scanf("%s", name);

    int length = strlen(name);

    FILE *file = fopen("teskari.txt", "w");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = length - 1; i >= 0; i--) {
        fputc(name[i], file);
    }

    fclose(file);

    printf("Ismingiz teskari tartibda teskari.txt fayliga yozildi.\n");

    return 0;
}
