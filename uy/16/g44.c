#include <stdio.h>
int main ()
{
    int a=20;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if(i==1||j==1||i==a||j==a||i==j&&i>10||i+j==a+1&&i<=10||j==19||j==18&&i!=2&&i!=19||j==17&&i!=3&&i!=2&&i!=19&&i!=18||j==16&&i!=3&&i!=2&&i!=19&&i!=18&&i!=4&&i!=17||j==15&&i!=3&&i!=2&&i!=19&&i!=18&&i!=17&&i!=4&&i!=5&&i!=16||j==14&&i!=3&&i!=2&&i!=19&&i!=18&&i!=4&&i!=5&&i!=16&&i!=6&&i!=15&&i!=17||j==13&&i!=2&&i!=3&&i!=4&&i!=5&&i!=6&&i!=7&&i!=14&&i!=15&&i!=16&&i!=17&&i!=18&&i!=19||j==12&&i!=2&&i!=3&&i!=4&&i!=5&&i!=6&&i!=7&&i!=14&&i!=15&&i!=16&&i!=17&&i!=18&&i!=19&&i!=13&&i!=8)printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}