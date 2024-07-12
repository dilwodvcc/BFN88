#include <stdio.h>

int main() {
    int n;

    printf("\tXona sonini kiriting: ");
    scanf("%d", &n);

    int arr[n];

    printf("\tSonni kiriting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d.Son ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int mi = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
            mi = i;
        }
    }

    int count = n - mi - 1;
    printf("Minimal elementdan keyin %d ta element bor.\n", count);

    return 0;
}