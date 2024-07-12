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
        if (arr[i]==5)
        {
           printf("%d ,",i);
        }
        
    }
}