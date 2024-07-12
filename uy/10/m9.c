#include <stdio.h>

int main() {
    int a = -2147483648; // Eng katta sonni saqlash uchun o'zgaruvchi (minimal qiymat)
    int b = -2147483648; // Ikkinchi eng katta sonni saqlash uchun o'zgaruvchi (minimal qiymat)
    int i; // Foydalanuvchi tomonidan kiritiladigan son

    // Foydalanuvchidan sonlarni o'qib olamiz va ikkinchi eng katta sonni topamiz
    printf("Sonlarni kiriting. Manfiy son kiritguncha dastur to'xtaydi:\n");
    do {
        scanf("%d", &i); // Sonni o'qib olamiz
        if (i > a) { // Kiritilgan son eng katta son bo'lsa
            b = a; // b eng katta sonni ikkinchi eng katta son qilib qabul qilamiz
            a = i; // Kiritilgan sonni b eng katta son qilib qabul qilamiz
        } else if (i > b && i != a) { // Kiritilgan son b eng katta son emas va ikkinchi eng katta son bo'lsa
            b = i; // Kiritilgan sonni ikkinchi eng katta son qilib qabul qilamiz
        }
    } while (i >= 0); // Manfiy son kiritilguncha davom etamiz

    // Ikkinchi eng katta sonni ekranga chiqaramiz
    printf("Ikkinchi eng katta son: %d\n", b);

    return 0;
}
