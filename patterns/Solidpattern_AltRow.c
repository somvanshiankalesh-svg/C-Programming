// solid pattern  alternate row 5 and 2

#include <stdio.h>
int main()
{
    int i;
    int j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i % 2 == 0)
            {
                printf("5");
            }
            else
            {
                printf("2");
            }
        }
        printf("\n");
    }
    return 0;
}