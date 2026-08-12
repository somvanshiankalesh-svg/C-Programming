#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};  
	int arr1[7]={1,2,3,4,5,6,7};
	int i = 0;              
	for(i =0; i<5; i++)
	{
		//count ++;
	}
	printf("count of first :%d\n",i);
	
	int j = 0;
	for( j=0; j<7; j++)
	{
		//count ++;
	}
	printf("count of 2nd:%d\n",j);
	
	if(i==j)
	{
		printf("Arrays are equal");
	}
	else 
	{
		printf ("Arrays are not equal" );
	}
	
	return 0;
}
