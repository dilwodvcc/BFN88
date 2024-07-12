#include <stdio.h>
#include <stdlib.h>

char aa(char a) {

    char unli[] = {'a', 'e', 'i', 'o', 'u'};
    int min_masofa = abs(a - unli[0]);
    char ya_un = unli[0];

    for (int i = 0; i < 5; i++) {
        int masofa = abs(a - unli[i]);
        if (masofa < min_masofa) {
            min_masofa = masofa;
            ya_un = unli[i];
        }
    }

    return ya_un;
}

int main() {
    char a;
    printf("\tKichik harf kiriting kiriting: ");
    scanf(" %c", &a);

    if (a < 'a' || a > 'z') {
        printf("\tIltimos kichik harf kiriting.\n");
        return 1;
    }

    char natija = aa(a);
    printf("'%c' harfiga eng yaqin unli a '%c'.\n", a, natija);

    return 0;
}
