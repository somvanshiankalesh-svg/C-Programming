#include <stdio.h>
int main()
{

    int a[5] = {1, 2, 3, 4, 5};

    a[6];
    int newElement = 6;

    a[5] = newElement;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", a[i]);
    }
    printf(" the new element in the array is :%d", newElement);
    return 0;
}