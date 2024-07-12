#include <stdio.h>

int main() {
    int qatorlar, ustunlar;
    
    // Massiv o'lchovlarini kiriting
    printf("Qatorlar sonini kiriting: ");
    scanf("%d", &qatorlar);
    printf("Ustunlar sonini kiriting: ");
    scanf("%d", &ustunlar);
    
    int massiv[qatorlar][ustunlar];

    // Massiv elementlarini kiriting
    printf("Massiv elementlarini kiriting:\n");
    for(int i = 0; i < qatorlar; i++) {
        for(int j = 0; j < ustunlar; j++) {
            scanf("%d", &massiv[i][j]);
        }
    }
    
    int yigindi = 0;
    int topildi = 0;
    
    printf("Yig'indi: ");
    
    for(int i = 0; i < qatorlar && !topildi; i++) {
        for(int j = 0; j < ustunlar && !topildi; j++) {
            if (massiv[i][j] < 0) {
                topildi = 1;
            } else {
                if (i == 0 && j == 0) {
                    printf("%d", massiv[i][j]);
                } else {
                    printf(" + %d", massiv[i][j]);
                }
                yigindi += massiv[i][j];
            }
        }
    }
    
    printf("\nUmumiy yig'indi: %d\n", yigindi);

    return 0;
}
