#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uzun(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("\tBunday file yo'q ! ! !");
        return;
    }

    char word[100];
    char uzunsoz[100] = "";
    int max = 0;

    while (fscanf(file, "%s", word) != EOF) {
        int length = strlen(word);
        if (length > max) {
            max = length;
            strcpy(uzunsoz, word);
        }
    }

    fclose(file);

    if (max > 0) {
        printf("Eng uzun so'z: %s\n", uzunsoz);
    } else {
        printf("Faylda so'zlar topilmadi.\n");
    }
}

int main() {
    const char *filename = "text.txt";
    uzun(filename);
    return 0;
}
