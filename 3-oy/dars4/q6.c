#include <stdio.h>
int tub(int aa)
{
    int sum = 0;
    for (int i = 1; i <= aa; i++)
    {
        if (aa % i == 0)
        {
            sum++; 
        }
    }
    if (sum == 2)
    {
        return aa;
    }
    
}
int main ()
{
    int a = 100,b = 1; 
    while (b < a)
    {
        int c = tub(b);
        int d = c % 10;
        int e = c / 10;
        int f = (d*10) + e;
        int g = tub(f);
        printf("%d <---> ",c);
        puts("");
        b++;
    }
    
}