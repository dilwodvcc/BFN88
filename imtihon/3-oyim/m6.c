#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool aa(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void write(const char* filename, int* array, int size) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("ERROR");
        exit(1);
    }
    fwrite(array, sizeof(int), size, file);
    fclose(file);
}

int main() {
    int N;
    printf("N sonini kiriting: ");
    scanf("%d", &N);

    int* array = (int*)malloc(N * sizeof(int));
    if (array == NULL) {
        perror("ERROR");
        exit(1);
    }

    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 10;
    }

    int tub[N], juft[N], toq[N], manfiy[N], musbat[N];
    int tub_count = 0, juft_count = 0, toq_count = 0, manfiy_count = 0, musbat_count = 0;

    for (int i = 0; i < N; i++) {
        if (aa(array[i])) tub[tub_count++] = array[i];
        if (array[i] % 2 == 0) juft[juft_count++] = array[i];
        if (array[i] % 2 != 0) toq[toq_count++] = array[i];
        if (array[i] < 0) manfiy[manfiy_count++] = array[i];
        if (array[i] > 0) musbat[musbat_count++] = array[i];
    }

    write("tub.bin", tub, tub_count);
    write("juft.bin", juft, juft_count);
    write("toq.bin", toq, toq_count);
    write("manfiy.bin", manfiy, manfiy_count);
    write("musbat.bin", musbat, musbat_count);

    free(array);
    return 0;
}
