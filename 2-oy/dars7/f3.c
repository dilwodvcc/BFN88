#include <stdio.h>
int main() {
    int n;
    float b = 0;
    
    printf("\tSonni kiriting: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            b -= 1 * i;
        } else {
            b += 1 * i;
        }
    }
    
    printf("\t\tYig'indi: %.2f\n", b);
    
    return 0;
}
