#include <stdio.h>

char yaqin_unli(char a) {
    char unli[] = {'a', 'e', 'i', 'o', 'u'};
    int min_masofa = (a - unli[0] < 0) ? -(a - unli[0]) : (a - unli[0]);
    char ya_un = unli[0];

    for (int i = 1; i < 5; i++) {
        int masofa = (a - unli[i] < 0) ? -(a - unli[i]) : (a - unli[i]);
        if (masofa < min_masofa) {
            min_masofa = masofa;
            ya_un = unli[i];
        } else if (masofa == min_masofa && unli[i] > ya_un) {
            ya_un = unli[i];
        }
    }

    return ya_un;
}

int main() {
    char a;
    printf("\tKichik harf kiriting: ");
    scanf(" %c", &a);

    if (a < 'a' || a > 'z') {
        printf("\tIltimos kichik harf kiriting.\n");
        return 1;
    }

    char natija = yaqin_unli(a);
    printf("'%c' harfiga eng yaqin unli '%c'.\n", a, natija);

    return 0;
}

