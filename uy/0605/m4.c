#include <stdio.h>
#include <string.h>

#define maxl 1000

void hisob(char *str) {
    int count[256] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("\nBelgilar ishtirok :\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[maxl];

    printf("\tGap kiriting: ");
    scanf("%[^\n]%*c", str);  

    hisob(str);

    return 0;
}
