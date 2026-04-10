#include "ex_23_realloc.h"

void agrandir_tableau() {
    printf("=== Agrandissement avec realloc ===\n");
    
    int* tableau = (int*)malloc(3 * sizeof(int));
    if (tableau == NULL) return;

    tableau[0] = 10;
    tableau[1] = 20;
    tableau[2] = 30;

    printf("Avant (3 elements): ");
    for (int i = 0; i < 3; i++) printf("%d ", tableau[i]);
    printf("\n");

    int* nouveau = (int*)realloc(tableau, 5 * sizeof(int));
    if (nouveau == NULL) {
        free(tableau);
        return;
    }
    tableau = nouveau;

    tableau[3] = 40;
    tableau[4] = 50;

    printf("Apres (5 elements): ");
    for (int i = 0; i < 5; i++) printf("%d ", tableau[i]);
    printf("\n");

    free(tableau);
}

void reducer_tableau() {
    printf("\n=== Reduction avec realloc ===\n");
    
    int* tab = (int*)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) tab[i] = (i + 1) * 10;

    printf("Avant (5): ");
    for (int i = 0; i < 5; i++) printf("%d ", tab[i]);

    tab = (int*)realloc(tab, 3 * sizeof(int));

    printf("\nApres (3): ");
    for (int i = 0; i < 3; i++) printf("%d ", tab[i]);
    printf("\n");

    free(tab);
}

void reallocation_progressive() {
    printf("\n=== Reallocation progressive ===\n");
    
    int taille = 2;
    int capacite = 2;
    int* tab = (int*)malloc(capacite * sizeof(int));
    if (tab == NULL) return;

    for (int val = 1; val <= 10; val++) {
        if (taille >= capacite) {
            capacite *= 2;
            tab = (int*)realloc(tab, capacite * sizeof(int));
            if (tab == NULL) return;
            printf("Reallocation a capacite %d\n", capacite);
        }
        tab[taille - 1] = val;
        taille++;
    }

    printf("Tableau final: ");
    for (int i = 0; i < taille - 1; i++) printf("%d ", tab[i]);
    printf("\n");

    free(tab);
}

void ajouter_element() {
    printf("\n=== Ajout dynamique d'elements ===\n");
    
    int* liste = NULL;
    int nb = 0;
    int valeurs[] = {5, 15, 25, 35, 45};

    for (int i = 0; i < 5; i++) {
        liste = (int*)realloc(liste, (nb + 1) * sizeof(int));
        if (liste == NULL) return;
        liste[nb++] = valeurs[i];
        printf("Ajout %d: ", valeurs[i]);
        for (int j = 0; j < nb; j++) printf("%d ", liste[j]);
        printf("\n");
    }

    free(liste);
}

int main() {
    agrandir_tableau();
    reducer_tableau();
    reallocation_progressive();
    ajouter_element();

    return 0;
}