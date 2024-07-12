#include <stdio.h>
		int main()
	{
		int r, h;
		float pi ,as;
		puts("\tRadiusni kiriting . . . ");
		scanf("%d",&r);
		puts("\tBalandlikni kiriting . . . ");
		scanf("%d",&h);
		pi = 3.14;
		as =2*(float)(pi)*(r*r)+2*(float)(pi)*r*h;
		printf("\tSurface area = %g",as);
	}
