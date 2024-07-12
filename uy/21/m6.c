#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("\tXona sonini kiriting: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0));

    printf("\t\tRandom sonlar:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double or = (double)sum / n;

    printf("\tO'rta arifmetigi: %.2f\n", or);

    return 0;
}
