#include <stdio.h>
#include <string.h>

void harf5(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("\tBunday file yo'q ! ! !");
        return;
    }

    char word[100];
    while (fscanf(file, "%s", word) != EOF) {
        if (strlen(word) < 5) {
            printf("%s\n", word);
        }
    }

    fclose(file);
}

int main() {
    const char *filename = "text.txt";
    harf5(filename);
    return 0;
}
