#include <stdio.h>
#include <stdlib.h>
void menyu ()
{
    printf("\n\t| 1 ==> Joylarni ko'rish \n");
    printf("\t| 2 ==> Kino haqida malumot   \n");
    printf("\t| 3 ==> Chipta hariq qilish   \n");
    printf("\t| 4 ==> Tugagatish            \n");
}
void joy ()
{
    
        printf("\t| Band joylar : ");
    int b;
    int arr[]={1,8,3,12,5,10};
    b = sizeof(arr)/sizeof(arr[0]);
        for (int i = 0; i < b; i++)
    {
       printf("%d ,",arr[i]); 
    }
    puts("");
        printf("\t| Bosh joylar :");
    int e;
    int rr[]={2,4,6,7,9,11,13,14,15,16,17,18};
    e = sizeof(rr)/sizeof(rr[0]);
        for (int i = 0; i < e; i++)
    {
       printf("%d ,",rr[i]); 
    }
}
void kinohaqida ()
{
     puts("Avengers Endgame katta muvaffaqiyatga erishib, dunyo bo'ylab 2.799 milliard dollar daromad keltirdi va ko'plab rekordlarni o'rnatdi. Film tanqidchilar tomonidan rejissura, aktyorlik, musiqiy qo'llanma, aksion sahnalar, vizual effektlar va hissiy og'irlik jihatidan maqtovga sazovor bo'ldi. Shuningdek, film 92-Oskar mukofotlarida Eng yaxshi vizual effektlar nominatsiyasiga ham nomzod bo'lgan");
}

int main ()
{
    int a,f=0;
    
    
        /*    puts("\t\tTanlang");
        printf("1-qator:  1000 ming.  (1-6 gacha)");
        printf("2-qator:  75 ming.    (7-12 gacha)");
        printf("3-qator:  50 ming.    (13-18 gacha)");*/
        while (a!=4)
        {
            menyu();
            
                 puts("\tTanlang : ");
          scanf("%d",&a);
        
        if(a==1)
        {
            joy();
            puts("");
        }
        if(a==2)
        {
        kinohaqida();
        } 
        

        if (a==3)
        {
            joy();
            puts("");
            int d;
        while (1)
        {
            qaytar:
             printf("\t\tJoy buyurtma bering :");
            scanf("%d",&d);

                char ha[5];
                int b;
                int arr[]={1,8,3,12,5,10};
                b = sizeof(arr)/sizeof(arr[0]);

                for (int i = 0; i < b; i++)
                {
                    if (d==arr[i]);
                {
                    printf("\t Bu joy oldinroq ban etilgan\n");
                }
                }

                int e;
                int rr[]={2,4,6,7,9,11,13,14,15,16,17,18};
                e = sizeof(rr)/sizeof(rr[0]);

                    if (f==0)
                    {
                        for (int i = 0; i < e; i++)
                            {
                                if (d==rr[i])
                                {
                                    printf("\tSiz joy buyurtma qildingiz\n");
                                    f++;
                                    break;
                                }
                            }
                    }
                    puts("\t Yana joy sotib olasizmi");
                    scanf(" %s",ha);
                if (ha =="ha")
                {
                    goto qaytar;
                }
                else
                {
                    printf("\t\tMenyu qaytdingiz\n");
                    break;
                }
                  
                        
                
        } 
        }
        }
           
}


        | Bosh joylar :2 ,4 ,6 ,7 ,9 ,11 ,13 ,14 ,15 ,16 ,17 ,18 ,
                Joy buyurtma bering :4
         Bu joy oldinroq ban etilgan
         Bu joy oldinroq ban etilgan
         Bu joy oldinroq ban etilgan
         Bu joy oldinroq ban etilgan
         Bu joy oldinroq ban etilgan
         Bu joy oldinroq ban etilgan
        Siz joy buyurtma qildingiz
         Yana joy sotib olasizmi


manga shunga yechim ber