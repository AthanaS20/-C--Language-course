#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    int scores[3]; // this is how we store data in a list
    scores[0] = 75;
    scores[1] = 80;
    scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}