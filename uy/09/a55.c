#include <stdio.h>
int main()
{
    int b = 40,a;

    puts("\tYashirilgan sonni toping");

    while (1) {
        printf("\tSon kiriting: ");
        scanf("%d", &a);

        if (a > b) {
            printf("Qidirilayotgan son %d dan kichik\n", a);
        } else if (a < b) {
            printf("Qidirilayotgan son %d dan katta\n", a);
        } else {
            printf("Tugadi! Siz yashirilgan sonni topdingiz.\n");
            break;
        }
    }

    return 0;
}
