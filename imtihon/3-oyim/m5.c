#include <stdio.h>
#include <string.h>

#define uzunli 10

struct Student {
    char name[50];
    int yow;
    int kurs;
    char kurs_t[50];
};

void print22va2(struct Student students[], int uzun) {
    printf("Yoshi 22 dan katta studentlar va 2 kurslar :\n");
    for (int i = 0; i < uzun; i++) {
        if (students[i].yow > 22&&students[i].kurs == 2) {
            printf("Ismi: %s\n Yoshi: %d\n Kursi: %d\n O'qish turi: %s\n", students[i].name, students[i].yow, students[i].kurs, students[i].kurs_t);
        }
    }
}

int main() {
    struct Student students[uzunli] = {
        {"Ali Valiyev", 21, 1, "kunduzgi"},
        {"Bekzod Karimov", 23, 3, "kunduzgi"},
        {"Dilnoza Ahmedova", 22, 2, "kechki"},
        {"Elyor Nematov", 24, 2, "kunduzgi"},
        {"Farhod Yusupov", 20, 1, "kechki"},
        {"Gulnoza Omonova", 23, 4, "kunduzgi"},
        {"Hilola Karimova", 25, 3, "kunduzgi"},
        {"Iroda Mamatqulova", 22, 2, "kunduzgi"},
        {"Javohir Rahimov", 21, 1, "kechki"},
        {"Kamola Norboeva", 26, 4, "kunduzgi"}
    };

    print22va2(students, uzunli);

    return 0;
}
