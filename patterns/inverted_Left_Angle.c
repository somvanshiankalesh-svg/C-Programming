#include <stdio.h>
int main()
{
	int r;
	int c;

	for (r = 5; r > 0; r--)
	{
		for (c = 1; c <= r; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
