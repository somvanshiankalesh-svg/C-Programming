#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char ch;
    printf(" Enter i for indian f for frnch :");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("NAMASTE you are indian");
}

void bonjour()
{
    printf("BONJOUR you are french");
}