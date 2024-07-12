#include <stdio.h>
#include <stdlib.h>

int aaa(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Bunday file yo'q ! ! !");
        return -1;
    }

    int count = 0;
    char a;

    while ((a = fgetc(file)) != -1) {
        if (a == '\n') {
            count++;
        }
    }

    fclose(file);

    if (a != '\n' && count > 0) {
        count++;
    }

    return count;
}

int main() {
    const char *filename = "text1.txt";

    int count = aaa(filename);
    if (count >= 0) {
        printf("Faylda %d ta qator bor\n", count);
    }

    return 0;
}
