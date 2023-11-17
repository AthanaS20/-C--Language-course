#include <stdio.h>

void swap(int *x, int *y);
int main(void)
{
    int x = 2;
    int y = 4;

    printf("x is %i y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}