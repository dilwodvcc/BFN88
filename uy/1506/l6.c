#include <stdio.h>
#include <ctype.h>

int main() {
    char word[100];

    printf("So'zni kiriting: ");
    scanf("%s", word);

    FILE *file = fopen("reverse.txt", "w");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    for (int i = 0; word[i] != '\0'; i++) {
        if (islower(word[i])) {
            fputc(toupper(word[i]), file);
        } else if (isupper(word[i])) {
            fputc(tolower(word[i]), file);
        } else {
            fputc(word[i], file);
        }
    }

    fclose(file);

    printf("So'z harflari o'zgartirildi va reverse.txt fayliga yozildi.\n");

    return 0;
}
