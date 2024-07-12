#include <stdio.h>

int aa(int arr[], int n) {
    int ab = arr[0];
    int ac = arr[0];
    int maxi = 0;
    int mini = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > ab) {
            ab = arr[i];
            maxi = i;
        }
        if (arr[i] < ac) {
            ac = arr[i];
            mini = i;
        }
    }

    if (mini < maxi) {
        return 5; 
    } else {
        return 6; 
    }
}

int main() {
    int n;
    printf("\tElementlar xonasini kiriting: ");
    scanf("%d", &n);

    int arr[n];
    printf("\tElementlarni kiriting:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a = aa(arr, n);
    if (a == 5) {
        printf("\tMin element oldin keladi.\n");
    } 
    if (a == 6)
    {
        printf("\tMax element oldin keladi.\n");
    }

    return 0;
}