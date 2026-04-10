#include "ex_07_for.h"
#include <stdio.h>

void afficher_numeros() {
    printf("=== Numeros de 1 a 5 ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void calculer_somme() {
    int somme = 0;
    for (int i = 1; i <= 10; i++) {
        somme += i;
    }
    printf("\n=== Somme 1 a 10 ===\n");
    printf("Somme = %d\n", somme);
}

void afficher_table_multiplication() {
    int nb = 7;
    printf("\n=== Table de multiplication de %d ===\n", nb);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", nb, i, nb * i);
    }
}

void parcours_tableau() {
    int valeurs[] = {3, 7, 12, 5, 9};
    int taille = 5;
    printf("\n=== Parcours de tableau ===\n");
    for (int i = 0; i < taille; i++) {
        printf("Index %d: %d\n", i, valeurs[i]);
    }
}

int factorielle(int n) {
    int resultat = 1;
    for (int i = 2; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    afficher_numeros();
    calculer_somme();
    afficher_table_multiplication();
    parcours_tableau();

    printf("\n=== Factorielle ===\n");
    printf("5! = %d\n", factorielle(5));
    printf("10! = %d\n", factorielle(10));

    return 0;
}