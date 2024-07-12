#include <stdio.h>
        int main()
{
    int a[5]; // 5 ta son uchun massiv
    int b; // Eng kichik sonni saqlash uchun o'zgaruvchi
    int i = 0; // tsikl index

    // Foydalanuvchidan sonlarni o'qib olamiz va massivga saqlaymiz
    printf("\t5 ta son kiriting:\n");
    do {
        scanf("%d", &a[i]);
        i++;
    } while (i < 5);

    // Eng kichik sonni topamiz
    b = a[0]; // Birinchi sonni eng kichik deb olash ucun
    i = 1; // t siklni qayta boshlash uchun
    do {
        if (a[i] < b) {
            b = a[i]; // Eng kichik sonni yangish
        }
        i++;
    } while (i < 5);

    // Eng kichik sonni ekranga chiqaramiz
    printf("\tEng kichik son: %d\n", b);

    return 0;
}