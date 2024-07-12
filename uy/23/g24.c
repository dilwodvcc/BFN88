#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
}


void Zero(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;
    printf("\tElementlar xonasini kiriting: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0));

    printf("\tRandom sonlar : ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10;
        printf("%d ,", arr[i]);
    }
    puts("");

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            arr[i] *= 2;
            arr[i + 1] = 0;
        }
    }

    Zero(arr, n);

    printf("\tO'zgartirilgan sonlar: ");
    printArray(arr, n);

    return 0;
}
