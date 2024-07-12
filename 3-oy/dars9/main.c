#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[32];
    char aftor[24];
    float narx;
    char type[16];

} BOOK;

void kitob(BOOK *book) 
{
    printf("kitob nomini kiriting : ");
    scanf("%s", book->name);
    printf("kitob muallifini kiriting: ");
    scanf("%s", book->aftor);
    printf("Yoshi: ");
    scanf("%d", &book->narx);
    printf("Jinsi: ");
    scanf("%s", book->type);
}

int main ()
{
    BOOK book[5];
    for (int i = 0; i < 5; i++) {
        printf("Shaxs %d uchun ma'lumotlarni kiriting:\n", i + 1);
        kitob(&book[i]);
        printf("\n");
    }
}
