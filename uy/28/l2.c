#include <stdio.h>
void aa(int b)
{
    int a = 0;
    int arr[1000];
    while (b > 0)
    {
        arr[a]=b%2;
        b = b / 2;
        a++;
    }
    for (int i = a-1; i >= 0; i--)
    {
       printf("%d",arr[i]);
    }
    
}
int main()
{
    int a;
    scanf("%d",&a);
    aa(a);
}