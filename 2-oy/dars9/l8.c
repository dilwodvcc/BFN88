#include <stdio.h>
void aaa(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    aaa (n);
}