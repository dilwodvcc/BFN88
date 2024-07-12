#include <stdio.h>

int fi(int n) {
    if (n <= 1)
        return n;
    return fi(n - 1) + fi(n - 2);
}

int main() {
    int n;
    printf("N sonini kiriting: ");
    scanf("%d", &n);

    int result = fi(n);
    printf("%d-son Fibonacci ketma-ketligida: %d\n", n, result);

    return 0;
}