#include <stdio.h>
int main ()
{
    int a=20;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if(i==1||j==1||i==a||j==a||i==j&&i>10||i+j==a+1&&i>10||j==10&&i>10||j==11&&i>10||j==9&&i>11||j==12&&i>11||j==13&&i>12||j==8&&i>12||j==14&&i>13||j==7&&i>13||j==6&&i>14||j==15&&i>14||i==19||j==5&&i>15||j==16&&i>15||j==4&&i>16||j==17&&i>16)printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
}