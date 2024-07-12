#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int a;
    printf("\tElementlar xonasini kiriting: ");
    scanf("%d", &a);
    int arr[a];
    srand(time(0));

    printf("\tBirinchi kiritilgan sonlar: ");
    for (int i = 0; i < a; i++)
    {
        arr[i] = rand() % 10;
        printf("%d ,", arr[i]);
    }
   puts("");

    int max = arr[0];
    int min = arr[0];
    int maxi = 0;
    int mini = 0;

    for (int i = 1; i < a; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxi = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            mini = i;
        }
    }

    int temp = arr[maxi];
    arr[maxi] = arr[mini];
    arr[mini] = temp;

    printf("\tAlmashtirilgan seriya: ");
    for (int i = 0; i < a; i++) {
        printf("%d ,", arr[i]);
    }
    return 0;
}
