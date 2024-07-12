#include <stdio.h>

int main() {
    int n;
    printf("\tXona sonini kiriting: ");
    scanf("%d", &n);

    int arr[n];

    printf("\tSonni kiriting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d.son = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    printf("\tAlmashtirilgan natija:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
