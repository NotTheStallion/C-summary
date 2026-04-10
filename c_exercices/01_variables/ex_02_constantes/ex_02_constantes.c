#include "ex_02_constantes.h"
#include <stdio.h>

const int TAILLE_PAR_DEFAUT = 10;
const float TAUX_TVA = 0.20f;

void afficher_constantes() {
    printf("=== Constantes define ===\n");
    printf("PI = %.5f\n", PI);
    printf("MAX_SCORE = %d\n", MAX_SCORE);
    printf("MESSAGE = %s\n", MESSAGE);
    printf("VRAI = %d, FAUX = %d\n", VRAI, FAUX);

    printf("\n=== Constantes const ===\n");
    printf("TAILLE_PAR_DEFAUT = %d\n", TAILLE_PAR_DEFAUT);
    printf("TAUX_TVA = %.2f (%.0f%%)\n", TAUX_TVA, TAUX_TVA * 100);
}

int get_taille_par_defaut() {
    return TAILLE_PAR_DEFAUT;
}

float get_taux_tva() {
    return TAUX_TVA;
}

int main() {
    afficher_constantes();

    int tableau[MAX_SCORE];
    printf("\nTableau de taille PI (%.0f): %zu elements\n", PI, sizeof(tableau) / sizeof(int));

    return 0;
}