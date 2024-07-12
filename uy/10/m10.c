#include <stdio.h>

int main() {
    int a = 2147483647; // Eng kichik sonni saqlash uchun o'zgaruvchi (maksimal qiymat)
    int b = 2147483647; // Ikkinchi eng kichik sonni saqlash uchun o'zgaruvchi (maksimal qiymat)
    int i; // Foydalanuvchi tomonidan kiritiladigan son

    // Foydalanuvchidan sonlarni o'qib olamiz va ikkinchi eng kichik sonni topamiz
    printf("Sonlarni kiriting. Manfiy son kiritguncha dastur to'xtaydi:\n");
    do {
        scanf("%d", &i); // Sonni o'qib olamiz
        if (i < a) { // Kiritilgan son eng kichik son bo'lsa
            b = a; // Birinchi eng kichik sonni ikkinchi eng kichik son qilib qabul qilamiz
            a = i; // Kiritilgan sonni eng kichik son qilib qabul qilamiz
        } else if (i < b && i != a) { // Kiritilgan son birinchi eng kichik son emas va ikkinchi eng kichik son bo'lsa
            b = i; // Kiritilgan sonni ikkinchi eng kichik son qilib qabul qilamiz
        }
    } while (i >= 0); // Manfiy son kiritilguncha davom etamiz

    // Ikkinchi eng kichik sonni ekranga chiqaramiz
    printf("Ikkinchi eng kichik son: %d\n", b);

    return 0;
}
