#include <stdio.h>
#include "calculatrice.h"

int main() {
    printf("=== Calculatrice (multi-fichiers) ===\n");
    printf("10 + 5 = %d\n", ajouter(10, 5));
    printf("10 - 5 = %d\n", soustraire(10, 5));
    printf("10 * 5 = %d\n", multiplier(10, 5));
    printf("10 / 5 = %.2f\n", diviser(10, 5));
    return 0;
}