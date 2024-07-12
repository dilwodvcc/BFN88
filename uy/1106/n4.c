#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char brend[50];
    int speed;
    double cost;
    int year;
    char color[20];
    bool new_car;
    bool automative;
    char country[50];
} Car;

void input(Car *car) {
    printf("Brend: ");
    scanf("%s", car->brend);
    printf("Speed: ");
    scanf("%d", &car->speed);
    printf("Cost: ");
    scanf("%lf", &car->cost);
    printf("Year: ");
    scanf("%d", &car->year);
    printf("Color: ");
    scanf("%s", car->color);
    printf("New Car (1 - Yes, 0 - No): ");
    scanf("%d", (int*)&car->new_car);
    printf("Automative (1 - Yes, 0 - No): ");
    scanf("%d", (int*)&car->automative);
    printf("Country: ");
    scanf("%s", car->country);
}

void print(Car cars[], int n) {
    printf("Yangi BMW mashinalari:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(cars[i].brend, "BMW") == 0 && cars[i].new_car) {
            printf("Brend: %s\n", cars[i].brend);
            printf("Speed: %d km/h\n", cars[i].speed);
            printf("Cost: %.2f\n", cars[i].cost);
            printf("Year: %d\n", cars[i].year);
            printf("Color: %s\n", cars[i].color);
            printf("Automative: %s\n", cars[i].automative ? "Yes" : "No");
            printf("Country: %s\n", cars[i].country);
            printf("\n");
        }
    }
}

int main() {
    Car cars[5];

    for (int i = 0; i < 5; i++) {
        printf("Mashina %d uchun malumotlarni kiriting:\n", i + 1);
        input(&cars[i]);
        printf("\n");
    }

    print(cars, 5);

    return 0;
}
