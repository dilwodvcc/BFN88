#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("N sonini kiriting: ");
    scanf("%d", &N);

    FILE *file = fopen("juftlar.txt", "w");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    printf("Juft sonlar juftlar.txt fayliga yozildi.\n");

    return 0;
}
