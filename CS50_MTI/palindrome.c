#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int num = get_int("Num: ");
    int temp = num;
    int reverse = 0;

    while (temp > 0)
    {
        int last_num = temp % 10;
        reverse = reverse * 10 + last_num;
        temp = temp / 10;
        printf("%i\n", reverse);
        printf("%i\n", num);

    }
    if (num == reverse)
    {
        printf("%i is Palindrome.\n", num);
    }
    else
    {
        printf("It's not.\n");
    }

    
      
    return reverse;


}