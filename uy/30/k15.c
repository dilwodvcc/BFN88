#include <stdio.h>

int main() {
    int n, m, i, j, a = -1, b = -1;
    printf("\tQator kiriting: ");
    scanf("%d", &n);
    printf("\tUstun kiriting: ");
    scanf("%d", &m);

    int matrix[n][m];
    printf("\tSon kiriting:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] < 0) {
                a = i;
                b = j;
            }
        }
    }

    int sum = 0;

    if (a != -1) {
        for (j = b + 1; j < m; j++) {
            sum += matrix[a][j];
        }
        for (i = a + 1; i < n; i++) {
            for (j = 0; j < m; j++) {
                sum += matrix[i][j];
            }
        }
    } else {
        printf("\tManfiy element yo'q\n");
        return 0;
    }

    printf("Oxirgi manfiy elementdan keyingi sonlarning yig'indisi: %d\n", sum);

    return 0;
}
