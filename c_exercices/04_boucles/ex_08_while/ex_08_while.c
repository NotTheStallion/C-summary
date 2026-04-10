#include "ex_08_while.h"
#include <stdio.h>

void tester_while() {
    int compteur = 0;
    printf("=== while (condition au debut) ===\n");
    while (compteur < 5) {
        printf("Compteur = %d\n", compteur);
        compteur++;
    }
}

void tester_do_while() {
    int valeur = 10;
    printf("\n=== do-while (toujours au moins 1 iteration) ===\n");
    do {
        printf("Valeur = %d\n", valeur);
        valeur--;
    } while (valeur > 0);
}

void saisie_utilisateur() {
    int nombre;
    printf("\n=== Saisie avec validation ===\n");
    printf("Entrez un nombre positif: ");
    scanf("%d", &nombre);
    
    while (nombre < 0) {
        printf("Erreur: nombre negatif. Reessayez: ");
        scanf("%d", &nombre);
    }
    printf("Vous avez entre: %d\n", nombre);
}

int lire_entier_positif() {
    int valeur;
    do {
        printf("Entrez un entier positif: ");
        if (scanf("%d", &valeur) != 1) {
            while (getchar() != '\n');
            printf("Entree invalide.\n");
            continue;
        }
        if (valeur <= 0) {
            printf("Doit etre positif.\n");
        }
    } while (valeur <= 0);
    return valeur;
}

int main() {
    tester_while();
    tester_do_while();
    printf("\n=== Demonstration terminee ===\n");
    return 0;
}