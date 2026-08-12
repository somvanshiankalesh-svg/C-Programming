#include<stdio.h>
int main()
{
	int r;
	int s;
	int c;
	
	for(r=5;r>0;r--) //5
	{
		for(s=1;s<=5-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=(2*r-1);c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
