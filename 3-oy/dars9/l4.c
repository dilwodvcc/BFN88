#include <stdio.h>
#include <string.h>

int main() {
    char gap[256];
    printf("Gapni kiriting: ");
    fgets(gap, sizeof(gap), stdin);

    int len = strlen(gap);
    if (len > 0 && gap[len-1] == '\n') {
        gap[len-1] = '\0';
    }


    char birgap[100];
    sscanf(gap, "%s", birgap);

    FILE *file = fopen("aaa.txt", "w");
    if (file != NULL) {
        fprintf(file, "%s\n%s\n", birgap, birgap);
        fclose(file);

    }
    return 0;
}
