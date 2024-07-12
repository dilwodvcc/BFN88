#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;

    printf("N sonini kiriting: ");
    scanf("%d", &N);

    srand(time(0));

    FILE *file = fopen("random.txt", "w");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        int random_num = rand();
        fprintf(file, "%d\n", random_num);
    }

    fclose(file);

    printf("Tasodifiy sonlar random.txt fayliga yozildi.\n");

    return 0;
}
