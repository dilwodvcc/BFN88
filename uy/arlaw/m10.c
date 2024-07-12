#include <stdio.h>
int main ()
{
	int a;
	puts("\tHaroratni kiriting . . . ");
	scanf("%d",&a);
	if(a==0)puts("\tO'ta sovuq");
	if(0<a&&a<=10)puts("\tJuda sovuq");
	if(10<a&&a<=20)puts("\tSovuq");
	if(20<a&&a<=30)puts("\tNormal");
	if(30<a&&a<=40)puts("\tIssiq");
	if(40<a)puts("\tJuda issiq");
}
