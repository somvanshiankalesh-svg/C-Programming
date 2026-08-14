#include <stdio.h>
int main()
{
    char strNew[100];
    printf("Enter a String :");
    scanf("%s", strNew);

    int i;
    for (i = 0; strNew[i] != '\0'; i++)
    {
        printf("%c", strNew[i]);
    }
    printf("\n Length of the string is :%d", i);
    return 0;
}