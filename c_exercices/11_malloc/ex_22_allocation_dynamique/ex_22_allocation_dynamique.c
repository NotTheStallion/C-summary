#include "ex_22_allocation_dynamique.h"

void allouer_tableau() {
    printf("=== Allocation dynamique avec malloc ===\n");
    
    int taille = 5;
    int* tableau = (int*)malloc(taille * sizeof(int));
    
    if (tableau == NULL) {
        printf("Erreur: allocation echouee\n");
        return;
    }

    printf("Tableau alloue de %d elements\n", taille);
    printf("Adresse: %p\n", (void*)tableau);

    for (int i = 0; i < taille; i++) {
        tableau[i] = (i + 1) * 10;
    }

    printf("Valeurs: ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);
    printf("Memoire liberee\n");
}

void allouer_matrice() {
    printf("\n=== Allocation matrice 2D ===\n");
    
    int lignes = 3, colonnes = 4;
    int** matrice = (int**)malloc(lignes * sizeof(int*));
    
    if (matrice == NULL) return;

    for (int i = 0; i < lignes; i++) {
        matrice[i] = (int*)malloc(colonnes * sizeof(int));
    }

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            matrice[i][j] = (i * colonnes + j + 1) * 10;
        }
    }

    printf("Matrice %dx%d:\n", lignes, colonnes);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%4d ", matrice[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < lignes; i++) {
        free(matrice[i]);
    }
    free(matrice);
    printf("Memoire liberee\n");
}

void utiliser_free() {
    printf("\n=== Utilisation de free ===\n");
    
    char* texte = (char*)malloc(100);
    if (texte == NULL) return;

    sprintf(texte, "Bonjour allocation dynamique");
    printf("Texte: %s\n", texte);

    free(texte);
    printf("Pointeur libere (dangling possible maintenant)\n");
}

void allocation_avec_verification() {
    printf("\n=== Allocation avec verification ===\n");
    
    int* ptr = (int*)malloc(sizeof(int));
    if (!ptr) {
        printf("Echec allocation\n");
        return;
    }
    *ptr = 42;
    printf("Valeur: %d\n", *ptr);
    free(ptr);
    printf("Liberation OK\n");
}

int main() {
    allouer_tableau();
    allouer_matrice();
    utiliser_free();
    allocation_avec_verification();

    printf("\n=== Fin des allocations ===\n");
    return 0;
}