#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int a;
    
    printf("\t Xona kiriting :");
    scanf("%d",&a);

    int arr[a];


    for (int i = 0; i < a; i++)
    {
        arr[i]= rand() % (25+23)-23;
    }
    for (int i = 0; i < a; i++)
    {
        
        if (arr[i] == 0)
        {
            printf("nol= ");
            printf("%d\n",arr[i]);
        }
    }
     for (int i = 0; i < a; i++)
    {
        if (arr[i]>0)
        {
            printf("musbat= ");
            printf("%d\n",arr[i]);
        }
    }
     for (int i = 0; i < a; i++)
    {
        if(arr[i]<0)
        {
            printf("manfiy= ");
            printf("%d\n",arr[i]);
        }
        
    }
}