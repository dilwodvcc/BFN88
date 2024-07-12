#include <stdio.h>
int main ()
{
    char arr[100] = "";
    printf("\tSo'z kiriting : ");
    scanf("%s",arr);
    int count = 0;
    int sum = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= '!' && arr[i] <= '/')
        {
            sum++;
        }
        
    }
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= ':' && arr[i] <= '@')
        {
            sum++;
        }
        
    }
    printf("%d ta hatf bor",sum);
    return 0;
}