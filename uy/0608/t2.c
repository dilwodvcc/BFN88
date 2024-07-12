#include <stdio.h>

void aa(int a, int n) 
{
    if (a > n) 
    {
        return;
    }
    else 
    {
        printf("%d ", a);
        aa(a + 1, n);
    }
}

int main() 
{
    int n;
    printf("\t\tSonni kiriting: ");
    scanf("%d", &n);
    
    aa(1, n);
    printf("\n");

    return 0;
}
