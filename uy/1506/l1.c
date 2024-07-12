#include <stdio.h>
#include <stdlib.h>

struct Car {
    char name[50];
    char brand[50];
    int year;
    float price;
};

int main() {
    struct Car car;

    printf("Mashina nomini kiriting: ");
    scanf("%49s", car.name);  
    
    printf("Mashina brendini kiriting: ");
    scanf("%49s", car.brand);

    printf("Ishlab chiqarilgan yilini kiriting: ");
    scanf("%d", &car.year);

    printf("Narxini kiriting: ");
    scanf("%f", &car.price);

    FILE *file = fopen("car.txt", "w");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    fprintf(file, "Mashina nomi: %s\n", car.name);
    fprintf(file, "Brendi: %s\n", car.brand);
    fprintf(file, "Ishlab chiqarilgan yili: %d\n", car.year);
    fprintf(file, "Narxi: %.2f\n", car.price);

    fclose(file);

    printf("Ma'lumotlar car.txt fayliga yozildi.\n");

    return 0;
}
