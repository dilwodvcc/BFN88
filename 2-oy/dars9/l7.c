#include <stdio.h>
void aa (int b)
{
    if (b>0)
    {
        puts("\tmusbat son kiritgansz");
    }
    else puts("\tmanfiy son kiritgansiz");
}
int main()
{
    int a;
    scanf("%d",&a);
    aa (a);
}