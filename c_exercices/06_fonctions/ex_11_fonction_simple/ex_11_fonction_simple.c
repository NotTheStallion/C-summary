#include "ex_11_fonction_simple.h"
#include <stdio.h>

int ajouter(int a, int b) {
    return a + b;
}

double calculer_moyenne(double a, double b) {
    return (a + b) / 2.0;
}

void afficher_message() {
    printf("Bonjour depuis une fonction!\n");
}

int factorielle(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorielle(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("=== Fonctions simples ===\n");
    printf("ajouter(5, 3) = %d\n", ajouter(5, 3));
    printf("calculer_moyenne(10.5, 20.5) = %.2f\n", calculer_moyenne(10.5, 20.5));
    afficher_message();

    printf("\n=== Recursion ===\n");
    printf("factorielle(5) = %d\n", factorielle(5));
    printf("fibonacci(7) = %d\n", fibonacci(7));

    return 0;
}