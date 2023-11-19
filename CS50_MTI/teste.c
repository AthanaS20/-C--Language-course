#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    
    int reverse = 0;
    int temp = x;

    while (temp > 0)
    {
        int last_digit = temp % 10;
        reverse = reverse * 10 + last_digit;
        temp = temp / 10;

    }
    
    return reverse;
}