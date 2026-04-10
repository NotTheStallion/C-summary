#include "ex_13_pointeur_base.h"
#include <stdio.h>

void afficher_adresse() {
    int variable = 42;
    int* ptr = &variable;

    printf("=== Adresse et pointeur ===\n");
    printf("variable = %d\n", variable);
    printf("&variable = %p (adresse)\n", (void*)&variable);
    printf("ptr = %p (meme adresse)\n", (void*)ptr);
    printf("*ptr = %d (valeur pointée)\n", *ptr);
}

void modifier_valeur_pointeur() {
    int nombre = 10;
    int* p = &nombre;

    printf("\n=== Modification via pointeur ===\n");
    printf("Avant: nombre = %d, *p = %d\n", nombre, *p);
    *p = 100;
    printf("Apres: nombre = %d, *p = %d\n", nombre, *p);
}

void demonstration_pointeurs() {
    char c = 'A';
    char* pc = &c;
    double d = 3.14;
    double* pd = &d;

    printf("\n=== Differents types de pointeurs ===\n");
    printf("char:  sizeof(char*) = %zu, valeur = %c\n", sizeof(pc), *pc);
    printf("int:   sizeof(int*)  = %zu\n", sizeof(int*));
    printf("double: sizeof(double*) = %zu\n", sizeof(pd));
}

int* cree_pointeur() {
    int valeur = 99;
    return &valeur;
}

int main() {
    afficher_adresse();
    modifier_valeur_pointeur();
    demonstration_pointeurs();

    int var = 5;
    int* p = &var;
    printf("\n=== Resume ===\n");
    printf("& = adresse de\n");
    printf("* = valeur pointée par\n");
    printf("p pointe vers l'adresse %p\n", (void*)p);
    printf("la valeur a cette adresse est %d\n", *p);

    return 0;
}