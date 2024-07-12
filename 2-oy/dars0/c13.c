#include <stdio.h>
	int main()
	{
		int a,m;
		puts("\tAholi sonini kiriting . . . ");
		scanf("%d", &a);  //aholini kiritishini soraydi
		puts("\tMaydonni kiriting . . . ");
		scanf("%d",&m);  //maydonni kiritishini soraydi
		printf("\tZichligi = % .1f",(float)(a)/(float)(m));
	}
