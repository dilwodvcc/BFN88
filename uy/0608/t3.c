#include <stdio.h>

void aaa(int b) {
    if (b <= 0) {
        return;
    } else {
        if (b % 2 == 0) {
            printf("%d ", b);
        }
        aaa(b - 1);
    }
}

int main() {
    int a;
    printf("\t\tSonni kiriting: ");
    scanf("%d", &a);
    
    aaa(a);
    printf("\n");

    return 0;
}
