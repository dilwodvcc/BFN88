#include <stdio.h>
int main ()
{
    int arr[] = {4,-7,5,-8,6,-9,0,6,0,-3,0,0,0};
    int a = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < a; i++)
    {
        if (arr[i]>0||arr[i]<0||arr[i]!=0)
        {
           printf("%d ,",arr[i]);
        }
        
    }
}