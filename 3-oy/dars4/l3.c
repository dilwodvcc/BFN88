#include <stdio.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%s",arr);
    int count = 0;
    int sum = 0;
    for (int i = 0; arr[i]!= '\0'; i++)
    {
       if(arr[i] >= '0' && arr[i] <= '9')
       {
        count++;
       } 
    }
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            sum++;
        }
        
    }
     for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            sum++;
        }
        
    }
    
    printf("%d ta raqam bor",count);
    puts("");
    printf("%d ta hatf bor",sum);
    return 0;
}