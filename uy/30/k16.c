#include <stdio.h>

#define n 3
#define m 3

void print(int matrix[n][m]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[n][m] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Asl ko'rinishi:\n");
    print(matrix);

    for(int i = 0; i < n; i++) {
        int vaqtinchalik = matrix[0][i];
        matrix[0][i] = matrix[i][0];
        matrix[i][0] = vaqtinchalik;
    }

    printf("\nO'zgartirilgan ko'rinishi:\n");
    print(matrix);

    return 0;
}
