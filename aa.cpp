#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void)
{
	int i,h;
	for (h=1;h<=9;h++)
	{
		system("cls");
		for(i=1;i<=9;i++)
		{
	     	printf("%d*%d=%d ",h,i,h*i);
		}
		getch();
	}
	return 0;

}
