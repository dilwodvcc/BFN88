#include <stdio.h>

void diagonalAlmashtirish(int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i][i];
        arr[i][i] = arr[i][n-i-1];
        arr[i][n-i-1] = temp;
    }
}

void printMatrix(int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Massiv o'lchamini kiriting (n): ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Massiv elementlarini kiriting:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nAsl massiv:\n");
    printMatrix(n, arr);

    diagonalAlmashtirish(n, arr);

    printf("\nDiagonallari almashtirilgan massiv:\n");
    printMatrix(n, arr);

    return 0;
}
