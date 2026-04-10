#include "bibliotheque.h"

void afficher_accueil() {
    printf("================================\n");
    printf("     MA BIBLIOTHEQUE C\n");
    printf("================================\n");
}

void afficher_a_propos() {
    printf("Cette bibliotheque contient des fonctions utilitaires.\n");
    printf("Version: 1.0\n");
}

int calculer_somme(int a, int b) {
    return a + b;
}