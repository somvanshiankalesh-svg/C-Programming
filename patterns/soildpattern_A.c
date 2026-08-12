// print pattern type of (A)
#include <stdio.h>
int main()
{
    int r;
    int c;
    for (r = 0; r < 6; r++)
    {
        for (c = 0; c < 6; c++)
        {
            if ((c == 2 && r == 0) || (r == 1 && c == 1) || (r == 1 && c == 3) || r == 2 ||
                (r == 3 && c == 0) || (r == 3 && c == 5) || (r == 4 && c == 0) || (r == 4 && c == 5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}