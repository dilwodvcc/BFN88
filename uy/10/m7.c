 #include <stdio.h>

int main() {
    int a; // Eng kichik sonni saqlash uchun o'zgaruvchi
    int b; // Foydalanuvchi tomonidan kiritiladigan son

    // Foydalanuvchidan sonlarni o'qib olamiz va eng kichik sonni topamiz
    printf("\t\tSonlarni kiriting. . . \n");
    scanf("%d", &b); // Birinchi sonni o'qib olamiz
    a = b; // Birinchi kiritilgan sonni eng kichik deb qabul qilamiz

    do {
        if (b < a) {
            a = b; // Kiritilgan son eng kichik bo'lsa, uni yangilaymiz
        }
        scanf("%d", &b); // Keyingi sonni o'qib olamiz
    } while (b >= 0); // Manfiy son kiritilguncha davom etamiz

    // Eng kichik sonni ekranga chiqaramiz
    printf("\tEng kichik son: %d\n", a);

    return 0;
}
