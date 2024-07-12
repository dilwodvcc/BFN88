#include <stdio.h>
int main()
{
        int a = 10,b = 20,c = 0;
                while(a<=b)
        {
        printf("\tSon = %d\n\tKvadrati = %d\n",a,a*a);
		c = c + (a*a);
                a++;
        }
	printf("\tYig'indisi = %d",c);
}
