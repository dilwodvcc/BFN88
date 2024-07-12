#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char language[50];
    char religion[50];
    long population;
    int num_of_cities;
    double area;
    char capital[50];
    char money[50];
    char president[50];
    char continent[50];
} Country;

void malumot(Country *country) {
    printf("Name: ");
    scanf("%s", country->name);
    printf("Language: ");
    scanf("%s", country->language);
    printf("Religion: ");
    scanf("%s", country->religion);
    printf("Population: ");
    scanf("%ld", &country->population);
    printf("Number of Cities: ");
    scanf("%d", &country->num_of_cities);
    printf("Area: ");
    scanf("%lf", &country->area);
    printf("Capital: ");
    scanf("%s", country->capital);
    printf("Money: ");
    scanf("%s", country->money);
    printf("President: ");
    scanf("%s", country->president);
    printf("Continent: ");
    scanf("%s", country->continent);
}

void tilsoni(Country countries[], int n) {
    printf("Ingliz tilida gaplashadigan aholisi 100000 dan kop bolgan mamlakatlar:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(countries[i].language, "English") == 0 && countries[i].population > 100000) {
            printf("Name: %s\n", countries[i].name);
            printf("Language: %s\n", countries[i].language);
            printf("Religion: %s\n", countries[i].religion);
            printf("Population: %ld\n", countries[i].population);
            printf("Number of Cities: %d\n", countries[i].num_of_cities);
            printf("Area: %.2lf\n", countries[i].area);
            printf("Capital: %s\n", countries[i].capital);
            printf("Money: %s\n", countries[i].money);
            printf("President: %s\n", countries[i].president);
            printf("Continent: %s\n", countries[i].continent);
            printf("\n");
        }
    }
}

int main() {
    Country countries[5];

    for (int i = 0; i < 5; i++) {
        printf("Davlat %d uchun ma'lumotlarni kiriting:\n", i + 1);
        malumot(&countries[i]);
        printf("\n");
    }

    tilsoni(countries, 5);

    return 0;
}
