#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;
    printf("n sonini kiriting: ");
    scanf("%d", &n);
    printf("m sonini kiriting: ");
    scanf("%d", &m);

    
    int matrix[n][m];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 9;
        }
    }

    printf("1 - holati :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        double temp = matrix[i][0];
        matrix[i][0] = matrix[i][n];
        matrix[i][n] = temp;
    }

    printf("Almashtirilgan holati:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
