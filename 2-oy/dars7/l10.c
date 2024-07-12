#include <stdio.h>
    int main()
{
    double c=0,d,a;
    scanf("%lf",&a);
    puts("---------");
    for (;a<=10;a++)
    {
       double d = 1/a;
        c+=d;
        printf("%g\n",a);
    }
    printf("yigindi =  %g\n",c);
}