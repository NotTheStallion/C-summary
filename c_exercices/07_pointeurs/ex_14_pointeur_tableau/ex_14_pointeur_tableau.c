#include "ex_14_pointeur_tableau.h"
#include <stdio.h>

void parcours_pointeur() {
    int tableau[] = {10, 20, 30, 40, 50};
    int* ptr = tableau;

    printf("=== Parcours avec pointeur ===\n");
    for (int i = 0; i < 5; i++) {
        printf("ptr + %d: %d (adresse %p)\n", i, *(ptr + i), (void*)(ptr + i));
    }
}

void access_index_notation() {
    int valeurs[] = {1, 2, 3, 4, 5};
    int* p = valeurs;

    printf("\n=== Notation tableau vs pointeur ===\n");
    printf("p[2] = %d\n", p[2]);
    printf("*(p+2) = %d\n", *(p + 2));
    printf("2[p] = %d\n", 2[p]);  // Notation valide mais bizarre!
}

void increment_pointeur() {
    int donnees[] = {100, 200, 300};
    int* ptr = donnees;

    printf("\n=== Incrementation de pointeur ===\n");
    printf("Debut: *ptr = %d (adresse %p)\n", *ptr, (void*)ptr);
    ptr++;
    printf("Apres ptr++: *ptr = %d (adresse %p)\n", *ptr, (void*)ptr);
    ptr++;
    printf("Encore ++: *ptr = %d (adresse %p)\n", *ptr, (void*)ptr);
}

int somme_tableau_ptr(int* debut, int* fin) {
    int somme = 0;
    while (debut <= fin) {
        somme += *debut;
        debut++;
    }
    return somme;
}

void afficher_differences() {
    int tab[] = {5, 10, 15};
    int* p = tab;

    printf("\n=== Resume ===\n");
    printf("tab   = %p (adresse du tableau)\n", (void*)tab);
    printf("&tab[0] = %p (equivalent)\n", (void*)&tab[0]);
    printf("p     = %p (pointeur)\n", (void*)p);
    printf("\nsizeof(tab)   = %zu\n", sizeof(tab));
    printf("sizeof(p)     = %zu\n", sizeof(p));
}

int main() {
    parcours_pointeur();
    access_index_notation();
    increment_pointeur();

    int nums[] = {1, 2, 3, 4, 5};
    printf("\nSomme (ptr): %d\n", somme_tableau_ptr(nums, nums + 4));

    afficher_differences();

    return 0;
}