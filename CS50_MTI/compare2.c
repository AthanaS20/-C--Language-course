#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string i = get_string("i: ");
    string j = get_string("j: ");

    if (*i == *j)
    {
        printf("Same, %p %p\n", i, j);
    }
    else
    {
        printf("Different, %p %p\n", i, j);
    }
}