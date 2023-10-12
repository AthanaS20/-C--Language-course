#include <cs50.h>
#include <stdio.h>

// ex 1
// int main(void)
// {
//     for (int i = 0;i < 4;i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// ex 2:

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("#\n");
//     }
// }

// ex 3

int main(void)
{
    int n;
    do
    {
        n = get_int("Size:\n ");
    }
    while (n < 1);
    
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}