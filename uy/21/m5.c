#include <stdio.h>

int main() {
    int n;

    printf("\tXona sonini kiriting: ");
    scanf("%d", &n);

    int arr[n];

    printf("\t\tSon kiriting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d.son = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    int mi = 0;
    int mmi = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            mi = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            mmi = i;
        }
    }

    int count;
    if (mi > mmi) {
        count = mi - mmi - 1;
    } else {
        count = mmi - mi - 1;
    }

    printf("Maksimal va minimal elementlar orasida %d ta element bor.\n", count);

    return 0;
}
