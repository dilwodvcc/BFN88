#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatrix(int n, int matrix[n][n]) {
        puts("");
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        printf("%3d ", matrix[i][j]);
                }
                puts("");
        }
        puts("");
}

void fillMatrix (int n, int matrix[n][n]) {
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        matrix[i][j] = rand() % 41 - 21;
                }
        }
}


void printArray (int arr[], int length) {
        for (int i = 0; i < length; i++) {
                printf("%d, ", arr[i]);
        }
        puts("");
}


int main () {
        srand(time(NULL));

        int n = 5;
        int matrix[n][n];

        fillMatrix(n, matrix);
        printMatrix(n, matrix);

        int musbat[n * n], musbat_index = 0;

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (matrix[i][j] > 0) {
                                musbat[musbat_index++] = matrix[i][j];
                        }
                }
        }

        printf("Musbatlar: ");
        printArray(musbat, musbat_index);

        int manfiy[n * n], manfiy_index = 0;

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (matrix[i][j] < 0) {
                                manfiy[manfiy_index++] = matrix[i][j];
                        }
                }
        }

        printf("Manfiylar: ");
        printArray(manfiy, manfiy_index);
        return 0;
}