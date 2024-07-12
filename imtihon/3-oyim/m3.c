#include <stdio.h>
#include <string.h>

void akotta3(char *gap) {
    int count = 0;
    for (int i = 0; gap[i] != '\0'; i++) {
        if (gap[i] == 'a' && count < 3) {
            gap[i] = 'A';
            count++;
        }
    }
}

int main() {
    char gap[] = "aaabbbcccaaaddd";
    akotta3(gap);
    printf("%s\n", gap);
    return 0;
}
