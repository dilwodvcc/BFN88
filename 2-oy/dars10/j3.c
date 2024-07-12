#include<stdio.h>
int main ()
{
    int sum = 0;
    int arr[] = {5,-4,34,60,54,-77,80,-92};
    int a = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < a; i++)
    {
        sum +=arr[i];
    }
    printf("%d",sum);
}