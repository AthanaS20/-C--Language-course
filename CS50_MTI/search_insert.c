#include <stdio.h>

int main(void) {
    int s[] = {5, 2, 3, 6, 8, 4};
    int target = 9;
    size_t numsSize = sizeof(s) / sizeof(s[0]); // Corrige o cálculo do tamanho do array
    int target_index = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (s[i] == target || s[i] > target)
        {
            printf("%i\n",target_index = i);
            break;
        }
        else if (s[i] < target && i == numsSize - 1)
        {
            printf("%i\n",target_index = i + 1);
            break;
        }
    }
    return target_index;

}