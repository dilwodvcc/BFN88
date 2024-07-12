#include <stdio.h>
    int main()
{
        int a = 1,b,c = 0;
        do{
            c = c + a;
            a++;
        }
        while (c<=100);
    printf("\t1 dan %d gacha qo'shsa > 100 dan katta boladi\n",a);
        printf("\t1 + ... + 15 = %d",c);
}