#include <stdio.h>

void aaa(int n) 
{
    if (n == 0)
    {
        return;
    } 
    else 
    {
        printf("%d ", n);
        aaa(n - 1);
    }
}

int main() 
{
    int n;
    printf("\t\tSonni kiriting: ");
    scanf("%d", &n);
    aaa(n);
    printf("\n");
    return 0;
}
