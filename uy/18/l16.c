#include <stdio.h>
int salom(int a)
{
    int e=0;
            for (int i = 1; i <= a; i++)
            {
                if(a%i==0)
                {
                    e++;
                }
            }
                if(e==2)
                {
                    puts("\t1");
                }
                else
                {
                    puts("\t0");
                }
}
int main()
{
    int a;
    printf("\tSonni kiriting : ");
    scanf("%d",&a);
    salom(a);
    return 0;
}