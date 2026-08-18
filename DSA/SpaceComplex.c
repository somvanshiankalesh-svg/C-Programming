#include <stdio.h>

void square(double num)
{
    printf("size of the num var : %d\n", sizeof(num));
    printf("size of data type:%d\n", sizeof(double));
    printf("square of the number is : %lf\n", num * num);
}
int main()
{
    double num = 12.12;
    square(num);
    return 0;
}