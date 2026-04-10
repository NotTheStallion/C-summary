#include "ex_09_tableau_1d.h"
#include <stdio.h>

void initialiser_tableau() {
    printf("=== Initialisation element par element ===\n");
    int nombres[5];
    nombres[0] = 10;
    nombres[1] = 20;
    nombres[2] = 30;
    nombres[3] = 40;
    nombres[4] = 50;

    for (int i = 0; i < 5; i++) {
        printf("nombres[%d] = %d\n", i, nombres[i]);
    }
}

void initialisation_braces() {
    printf("\n=== Initialisation avec accolades ===\n");
    int valeurs[] = {1, 2, 3, 4, 5};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    printf("Taille du tableau: %d\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("valeurs[%d] = %d\n", i, valeurs[i]);
    }
}

void parcours_tableau() {
    printf("\n=== Parcours et modification ===\n");
    int notes[5] = {10, 15, 12, 18, 14};

    printf("Avant: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", notes[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        notes[i] += 5;
    }

    printf("Apres +5: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", notes[i]);
    }
    printf("\n");
}

void recherche_dans_tableau() {
    printf("\n=== Recherche d'element ===\n");
    int tableau[] = {3, 7, 1, 9, 4};
    int recherche = 9;
    int trouve = 0;

    for (int i = 0; i < 5; i++) {
        if (tableau[i] == recherche) {
            printf("Trouve %d a l'index %d\n", recherche, i);
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("%d non trouve\n", recherche);
    }
}

int somme_tableau(int* tab, int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tab[i];
    }
    return somme;
}

int trouver_max(int* tab, int taille) {
    int max = tab[0];
    for (int i = 1; i < taille; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

int main() {
    initialiser_tableau();
    initialisation_braces();
    parcours_tableau();
    recherche_dans_tableau();

    int donnees[] = {5, 12, 8, 20, 3};
    printf("\n=== Fonctions de manipulation ===\n");
    printf("Somme: %d\n", somme_tableau(donnees, 5));
    printf("Max: %d\n", trouver_max(donnees, 5));

    return 0;
}