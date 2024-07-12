#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Random funksiyani e'lon qilish

    int yashirilgan_son = rand() % 101; // 0 dan 100 gacha yashirilgan son
    int son;

    printf("Yashirilgan son: %d\n", yashirilgan_son);

    while (1) {
        printf("Sonni kiriting: ");
        scanf("%d", &son);

        if (son > yashirilgan_son) {
            printf("Qidirilayotgan son %d dan kichik\n", son);
        } else if (son < yashirilgan_son) {
            printf("Qidirilayotgan son %d dan katta\n", son);
        } else {
            printf("Tugadi! Siz yashirilgan sonni topdingiz.\n");
            break;
        }
    }

    return 0;
}
