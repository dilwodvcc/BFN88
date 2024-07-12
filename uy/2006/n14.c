#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("\tBunday file yo'q ! ! !");
        return;
    }

    char word[100];
    while (fscanf(file, "%s", word) != -1) {
        if (tolower(word[0]) == 'p') {
            printf("%s\n", word);
        }
    }

    fclose(file);
}

int main() {
    const char *filename = "text.txt";
    print(filename);
    return 0;
}
