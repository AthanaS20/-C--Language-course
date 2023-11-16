#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);

    if (t == NULL)
    {
        return 1;
    }

    // for (int i = 0, n = strlen(s); i < n + 1;i++)
    // {
    //     t[i] = s[i];
    // }  make manually a copy

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }


    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    return 0;

}