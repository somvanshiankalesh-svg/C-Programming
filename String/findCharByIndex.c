#include <stdio.h>
int main()
{
    char strNew[] = "FORTUNECLOUD";

    for (int i = 0; i < 12; i++)
    {
        if (strNew[i] == 'R')
        {
            printf("the character R is at index %d\n", i);
        }
    }
    return 0;
}
