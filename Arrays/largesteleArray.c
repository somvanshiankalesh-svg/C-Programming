#include<stdio.h>
int main()
{
    int size = 0; 
	int largest = 0;
    int i=0;
    printf("Enter the size of array :");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements :");
    
    for( i =0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
//    printf("Enter largest:");
//    scanf("%d",&largest);
    int num =0;
    for(i= 0; i<size; i++)
    {
        if (arr[i]> num )
        {
            num = arr[i];
        }
    }
    printf("Largest element is : %d", num);
    return 0;
}
