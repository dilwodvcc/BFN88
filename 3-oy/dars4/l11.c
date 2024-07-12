#include <stdio.h>

int unlimi(char belgi) {
        if (belgi >='0' && belgi <= '9') {
                return 1;
        }
        return 0;
}

int stringlength (char soz[]) {
        int uzunlik = 0;

        for (int i = 0; soz[i] != '\0'; i++) {
                uzunlik++;
        }

        return uzunlik;
}


int main () {
        char soz[] = "1salomaa2wd";
        int first = 0, last = 0;
        int length = stringlength(soz);

        for (int i = 0; soz[i] != '\0'; i++) {
                if (unlimi(soz[i])) {
                        first = i;
                        break;
                }
        }

        for (int i = length - 1; i >= 0; i--) {
                if (unlimi(soz[i])) {
                        last = i;
                        break;
                }
        }
        for (int i = first + 1; i < last; i++)
        {
            printf("%c",soz[i]);
        }
        
        return 0;
}