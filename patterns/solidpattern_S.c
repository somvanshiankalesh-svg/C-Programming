#include <stdio.h>
int main()
{
    int r;
    int c;

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            if (r == 0 || r == 2 || r == 4 ||
                (r == 1 && c == 0) || (r == 3 && c == 4))
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
}