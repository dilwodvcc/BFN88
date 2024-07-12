#include <stdio.h>

int main() {
    int a; // Eng katta sonni saqlash uchun o'zgaruvchi
    int b; // Foydalanuvchi tomonidan kiritiladigan son

    // Foydalanuvchidan sonlarni o'qib olamiz va eng katta sonni topamiz
    printf("\t\tSonlarni kiriting . . .\n");
    scanf("%d", &b); // Birinchi sonni o'qib olamiz
    a = b; // Birinchi kiritilgan sonni eng katta deb qabul qilamiz

    do {
        if (b > a) {
            a = b; // Kiritilgan son eng katta bo'lsa, uni yangilaymiz
        }
        scanf("%d", &b); // Keyingi sonni o'qib olamiz
    } while (b >= 0); // Manfiy son kiritilguncha davom etamiz

    // Eng katta sonni ekranga chiqaramiz
    printf("\tEng katta son: %d\n", a);

    return 0;
}
