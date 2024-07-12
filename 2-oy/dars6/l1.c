#include <stdio.h>
int main ()
{
	int a,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l;
	scanf("%d",&a);
		while(a>0)
	{
	l=a%10;

			switch(l)
		{
		case 1:
		b++;break;
		case 2:
		c++;break;
		case 3:
		d++;break;
		case 4:
		e++;break;
		case 5:
		f++;break;
                case 6:
                g++;break;
                case 7:
                h++;break;
                case 8:
                i++;break;
                case 9:
                j++;break;
                case 0:
                k++;break;
		}
		a/=10;
	}
		printf("1= %d\n2= %d\n3= %d\n4= %d\n5= %d\n6= %d\n7= %d\n8= %d\n9= %d\n0= %d",b,c,d,e,f,g,h,i,j,k);

}
