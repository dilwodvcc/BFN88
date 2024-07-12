#include <stdio.h>
int main ()
{
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        printf("\tSon kiriting : ");
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            int b = arr[i]*1;
           printf("\tSon juft = %d\n",b);
        }
        else
        {
            int c = arr[i]-2;
            printf("\tSon toq = %d\n",c);
        }
        
        
    }
}