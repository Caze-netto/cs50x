#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Ponteiro NULL
    printf("1. Ponteiro NULL:\n");
    int *p1 = NULL;
    *p1 = 10;  // BOOM!

    // 2. Estouro de array
    printf("2. Estouro de array:\n");
    int arr[5];
    arr[10] = 42;  // BOOM!

    // 3. Ponteiro não inicializado
    printf("3. Ponteiro não inicializado:\n");
    int *p2;  // valor aleatório (lixo de memória)
    *p2 = 123; // BOOM!

    // 4. Uso após free
    printf("4. Uso após free:\n");
    int *p3 = malloc(sizeof(int));
    free(p3);
    *p3 = 99;  // BOOM!

    return 0;
}