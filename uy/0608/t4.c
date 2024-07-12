#include <stdio.h>

void aaa(int b, int a) 
{
    if (b > a) 
    {
        return;
    }
    else 
    {
        if (b % 2 != 0) 
        {
            printf("%d ", b);
        }
        aaa(b + 1, a);
    }
}

int main() 
{
    int a;
    printf("\t\tSonni kiriting: ");
    scanf("%d", &a);
    
    aaa(1, a);
    printf("\n");

    return 0;
}
