#include <stdio.h>
int main()
{
    int n;
    double a,b=1;
    scanf("%d",&n);
    scanf("%lf",&a);
    for(int i=0;i<n;i++){
        b*=a;
    }
    printf("%lf",b);
}