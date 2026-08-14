// string

#include <stdio.h>
int main()
{
    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    char strNew[] = "FORTUNECLOUD";

    for (int i = 0; i < 5; i++)
    {
        printf("%c,", strNew[i]);
    }
    return 0;
}