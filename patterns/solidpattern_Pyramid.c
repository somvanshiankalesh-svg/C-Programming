// sollid pattern type full star  pyramid

#include <stdio.h>
int main()
{
    int r;
    int c;
    int s;
    for (r = 1; r < 5; r++) // 1;1<3
    {
        for (s = 1; s < (5 - r); s++) // 1;1<2
        {
            printf(" ");
        }
        for (c = 1; c <= (2 * r - 1); c++) // c=1;1<1
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}