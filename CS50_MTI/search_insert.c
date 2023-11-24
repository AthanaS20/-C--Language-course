#include <stdio.h>

int main(void) {
    int s[] = {5, 2, 3, 6, 8, 4};
    int target = 9;
    size_t numsSize = sizeof(s) / sizeof(s[0]); // Corrige o cálculo do tamanho do array
    int first = 0;
    int last = numsSize - 1;

    while (first <= last) {
        int mid = first + (last - first) / 2; // Corrige a fórmula para calcular mid

        if (s[mid] == target) {
            printf("O alvo %d foi encontrado no índice %d\n", target, mid);
            return 0; // Termina o programa com código de sucesso
        } else if (s[mid] < target) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }

    printf("O alvo %d não foi encontrado. Deve ser inserido no índice %d\n", target, first);
    return 0; // Termina o programa com código de sucesso
}