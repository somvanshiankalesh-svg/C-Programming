#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int largest = 0;
    int seclarg = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            seclarg = largest;
            largest = arr[i];
        }
        else if (arr[i] > seclarg && arr[i] < largest)
        {
            seclarg = arr[i];
        }
    }
    printf("Largest number is : %d\n", largest);
    printf("Second largest number is : %d\n", seclarg);
    return 0;
}