#include <cs50.h>
#include <stdio.h>

float avarage(int lenght, int array[]);
const int N = 3;

int main(void)
{   

    int scores[3]; // this is how we store data in a list
    for (int i = 0;i < 3;i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", avarage(N, scores));
    
}

float avarage(int lenght, int array[])
{   
    int sum = 0;
    for (int i = 0; i < N;i++)
    {
        sum += array[i];
    }
    return sum / (float) N;
}