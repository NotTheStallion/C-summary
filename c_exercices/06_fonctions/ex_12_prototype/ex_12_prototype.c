#include "ex_12_prototype.h"
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int soustraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

double division(int a, int b) {
    if (b == 0) {
        printf("Erreur: division par zero!\n");
        return 0;
    }
    return (double)a / b;
}

int main() {
    printf("=== Programme de calcul (multi-fichiers) ===\n");
    printf("10 + 5 = %d\n", addition(10, 5));
    printf("10 - 5 = %d\n", soustraction(10, 5));
    printf("10 * 5 = %d\n", multiplication(10, 5));
    printf("10 / 5 = %.2f\n", division(10, 5));
    printf("10 / 0 = %.2f\n", division(10, 0));

    return 0;
}