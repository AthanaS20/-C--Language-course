#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s){ 

   

    for (char i = 0; i < 3; i++)
    {
        if (strlen(s) % 2 == 0)
        {   
            printf("%s\n", s);
            return 0;
        }
        

        
    }
    return 1;
}

