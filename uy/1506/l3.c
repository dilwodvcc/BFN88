#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("N sonini kiriting: ");
    scanf("%d", &N);

    FILE *file = fopen("sonlar.txt", "w");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        fprintf(file, "%d\n", i);
    }

    fclose(file);

    printf("Sonlar sonlar.txt fayliga yozildi.\n");

    return 0;
}
