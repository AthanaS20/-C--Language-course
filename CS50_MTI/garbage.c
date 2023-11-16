#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[1024]; // não inicializou o valor
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}