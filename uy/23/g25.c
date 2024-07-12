#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Elementlar xona kiriting: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0));

    printf("Random sonlar seriyasi:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[i + 1]) 
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
            else 
        {
            if (arr[i] < arr[i + 1]) 
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("O'zgartirilgan natija:\n");
    printArray(arr, n);

    return 0;
}
