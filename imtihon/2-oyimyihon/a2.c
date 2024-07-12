#include <stdio.h>
#include <stdlib.h>

void menyu()
{
    printf("\n\t| 1 ==> Joylarni ko'rish \n");
    printf("\t| 2 ==> Kino haqida malumot   \n");
    printf("\t| 3 ==> Chipta hariq qilish   \n");
    printf("\t| 4 ==> Tugatish            \n");
}

void joy()
{
    printf("\t| Band joylar : ");
    int b;
    int arr[] = {1, 8, 3, 12, 5, 10};
    b = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < b; i++)
    {
        printf("%d ,", arr[i]);
    }
    puts("");
    printf("\t| Bosh joylar :");
    int e;
    int rr[] = {2, 4, 6, 7, 9, 11, 13, 14, 15, 16, 17, 18};
    e = sizeof(rr) / sizeof(rr[0]);
    for (int i = 0; i < e; i++)
    {
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

    while (a != 4)
    {
        menyu();
        printf("\tTanlang : ");
        scanf("%d", &a);

        if (a == 1)
        {
            joy();
            puts("");
        }
        else if (a == 2)
        {
            kinohaqida();
        }
        else if (a == 3)
        {
            joy();
            puts("");
            int d;
            while (1)
            {
                printf("\t\tJoy buyurtma bering :");
                scanf("%d", &d);

                int b;
                int arr[] = {1, 8, 3, 12, 5, 10};
                b = sizeof(arr) / sizeof(arr[0]);

                int isBooked = 0;
                for (int i = 0; i < b; i++)
                {
                    if (d == arr[i])
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
                    int e;
                    int rr[] = {2, 4, 6, 7, 9, 11, 13, 14, 15, 16, 17, 18};
                    e = sizeof(rr) / sizeof(rr[0]);
                    int found = 0;
                    for (int i = 0; i < e; i++)
                    {
                        if (d == rr[i])
                        {
                            printf("\tSiz joy buyurtma qildingiz\n");
                            rr[i] = 0; 
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

                printf("\t\tBuyurtmangiz uchun raxmat!");
                break;
            }
            
        }
        
    }
    return 0;
}

           puts("\t\tTanlang");
        printf("1-qator:  1000 ming.  (1-6 gacha)");
        printf("2-qator:  75 ming.    (7-12 gacha)");
        printf("3-qator:  50 ming.    (13-18 gacha)");

        qiymatnin hisonlab ketishi kerak va oxrida qancha bo'lganini ekranga chiqarish kerak 
        va bosh orindiqlarni buyurtma bergandan keyin band orindiqlar qatoriga qo'shib berishi kerak