#include <stdio.h>
#include <stdlib.h>

void menyu()
{
    printf("\n\t| 1 ==> Joylarni ko'rish    \n");
    printf("\t| 2 ==> Kino haqida malumot   \n");
    printf("\t| 3 ==> Chipta hariq qilish   \n");
    printf("\t| 4 ==> Tugatish              \n");
}

void joy(int* arr, int arr_size, int* rr, int rr_size)
{
    printf("\t| Band joylar : ");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d ,", arr[i]);
    }
    puts("");
    printf("\t| Bosh joylar :");
    for (int i = 0; i < rr_size; i++)
    {
        if (rr[i] != 0)
            printf("%d ,", rr[i]);
    }
    puts("");
}

void kinohaqida()
{
    puts("Avengers Endgame katta muvaffaqiyatga erishib, dunyo bo'ylab 2.799 milliard dollar daromad keltirdi va ko'plab rekordlarni o'rnatdi. Film tanqidchilar tomonidan rejissura, aktyorlik, musiqiy qo'llanma, aksion sahnalar, vizual effektlar va hissiy og'irlik jihatidan maqtovga sazovor bo'ldi. Shuningdek, film 92-Oskar mukofotlarida Eng yaxshi vizual effektlar nominatsiyasiga ham nomzod bo'lgan");
}

int main()
{
    int a = 0;
    int f = 0;
    int jami_narx = 0;

    int band_joylar[] = {1, 8, 3, 12, 5, 10};
    int band_joylar_size = sizeof(band_joylar) / sizeof(band_joylar[0]);

    int bosh_joylar[] = {2, 4, 6, 7, 9, 11, 13, 14, 15, 16, 17, 18};
    int bosh_joylar_size = sizeof(bosh_joylar) / sizeof(bosh_joylar[0]);

    while (a != 4)
    {
        menyu();
        printf("\tTanlang : ");
        scanf("%d", &a);

        if (a == 1)
        {
            joy(band_joylar, band_joylar_size, bosh_joylar, bosh_joylar_size);
            puts("");
        }
        else if (a == 2)
        {
            kinohaqida();
        }
        else if (a == 3)
        {
            joy(band_joylar, band_joylar_size, bosh_joylar, bosh_joylar_size);
            puts("");
            int d;
            while (1)
            {
                printf("\t\tJoy buyurtma bering :");
                scanf("%d", &d);

                int isBooked = 0;
                for (int i = 0; i < band_joylar_size; i++)
                {
                    if (d == band_joylar[i])
                    {
                        isBooked = 1;
                        break;
                    }
                }

                if (isBooked)
                {
                    printf("\t Bu joy oldinroq band etilgan\n");
                }
                else
                {
                    int found = 0;
                    for (int i = 0; i < bosh_joylar_size; i++)
                    {
                        if (d == bosh_joylar[i])
                        {
                            printf("\tSiz joy buyurtma qildingiz\n");
                            bosh_joylar[i] = 0;
                            band_joylar[band_joylar_size++] = d;

                            // Narxni hisoblash
                            if (d >= 1 && d <= 6)
                                jami_narx += 1000;
                            else if (d >= 7 && d <= 12)
                                jami_narx += 75;
                            else if (d >= 13 && d <= 18)
                                jami_narx += 50;

                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("\t Noto'g'ri joy raqami\n");
                    }
                }

                char ha[5];
                printf("\t Yana joy sotib olasizmi (ha/yo'q)? ");
                scanf("%s", ha);
                if (ha[0] != 'h' || ha[1] != 'a' || ha[2] != '\0')
                {
                    printf("\t\tMenyu qaytdingiz\n");
                    break;
                }
            }
        }
        else
        {
            if (a == 4)
            {
                printf("\t\tBuyurtmangiz uchun raxmat!\n");
                printf("Umumiy narx: %d ming so'm\n", jami_narx);
                break;
            }
        }
    }
    return 0;
}
