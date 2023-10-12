#include <cs50.h>
#include <stdio.h>



// the best solution
int get_size(void);
void print_grid(int size);


int main(void)
{
    // get size of grid
    int n = get_size();

    //print the grid
    print_grid(n);
}

// creating the function get_size
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: \n");
    } while (n < 1);
    return n;
    
}

// creating the function print
void print_grid(int size)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("#");
        }
        printf("\n");        
    }
        
}