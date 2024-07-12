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
        if (arr[i] != 'a' && arr[i] !='o' && arr[i] != 'u' && arr[i] !='i' && arr[i] != 'e')
        {
            sum++;
        }
        
    }
    printf("%d ta hatf bor",sum);
    return 0;
}