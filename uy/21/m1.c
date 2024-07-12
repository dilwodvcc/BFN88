#include <stdio.h>
int main ()
{
    int arr[10] = {},b=1,c=0;
    for (int i = 0; i < 10; i++)
    {
        printf("\tSon kiriting : ");
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            b = b * arr[i];
        }
        else
        {
            c = c+arr[i];
        }
    }
    printf("\tJuft sonlar ko'paytmasi = %d",b);
    printf("\tToq sonlar yig'indisi = %d",c);
}