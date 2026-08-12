// #include<stdio.h>
// int main()
//{
//	int num;
//
//	do
//	{
//		printf("Enter any number:-");
//		scanf("%d",&num);
//		printf("%d\n",num);
//
//		if(num%2!=0)
//		{
//			break;
//		}
//	}
//	while(1);
//	{
//		printf("Thank you");
//	}
// }

// continue statement

// Que:-1) print 1 to 10 all numbers excepts for 6

// #include<stdio.h>
// int main()
//{
//	int i=1;
//	for(i=1;i<=10;i++)
//	{
//		if(i==6)
//		continue;
//
//		printf("%d\n",i);
//	}
//
//	return 0;
// }

// Que 2 print all the odd numbers from 5 to 50

// #include<stdio.h>
// int main()
//{
//	int i;
//	for(i=5;i<=50;i++)
//	{
//		if (i %2 != 0)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
// }

#include <stdio.h>
int main()
{
	//  int r;
	//  int c;
	//	for ( r=0;r<4;r++)
	//	{
	//		for( c=0;c<2;c++)
	//		{
	//			printf("*");
	//		}
	//		printf("\n");
	//	}


	

	// solid pattern alt number

	int r;
	int c;

	for (r = 0; r < 5; r++)
	{
		for (c = 0; c < 5; c++)
		{
			if (r % 2 == 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
