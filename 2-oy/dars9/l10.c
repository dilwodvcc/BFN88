#include <stdio.h>
void aaa(int a)
{
        for (int i = 1; i <= a; i++)
        {
            if(i%2==0)
            {
                printf("%d ",i);
            }
            
        }
        puts("\n\n");
        for (int i = 1; i <= a; a--)
        {
            if(a%2!=0)
            printf("%d ",a);
        }    
}
int main()
{
    int n;
    scanf("%d",&n);
    aaa (n);
return 0;
}