#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5] = {3, 4, 2, 5, 1}; // 2nd step set array element
    int i = 0;                  // define array index variable
    int ele = 4;                // static elelment to search in the array

    while (i < 5)               // 1<5 2<5 3<5 4<5 5<5 //for (int i=o;i<5;i++)
    {
        if (a[i] == ele)
        {
            printf("Element found at index %d\n", i);
            exit(0);
        }
    i++;                         // 0+1 increment index inn variable
}

if (i >= 5)
{
    printf("Element not found\n");
    exit(0);
}
return 0;
}