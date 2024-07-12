#include <stdio.h>

int main() {
    int i = 1; // ish davomida
    while (i) {
        int buyurtma_id;
        char mahsulot_nomi[50];
        int miqdori;
        
        // Buyurtmani qabul qilish
        printf("Buyurtma ID raqamini kiriting: ");
        scanf("%d", &buyurtma_id);
        
        // Buyurtma ma'lumotlarini ekranga chiqarish
        printf("\nBuyurtma ma'lumotlari:\n");
        printf("Buyurtma ID: %d\n", buyurtma_id);
        
        // Yana bir buyurtma qabul qilishni so'rang yoki to'xtatishni so'rang
        printf("\nYana bir buyurtma qabul qilasizmi? (ha/yo'q): ");
        char javob[3];
        scanf("%s", javob);
        if (strcmp(javob, "yo'q") == 0) {
            i = 0; // ishni to'xtatamiz
        }
    }
    printf("\nBuyurtma qabul qilishni to'xtatdingiz. Raxmat!\n");
    return 0;
}

