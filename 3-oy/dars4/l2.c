#include <stdio.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%s",arr);
    int count = 0;
    for (int i = 0; arr[i]!= '\0'; i++)
    {
       if(arr[i] >= '0' && arr[i] <= '9')
       {
        count++;
       } 
    }
    printf("%d ta raqam bor",count);
    return 0;
    
}