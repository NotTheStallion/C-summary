#include "ex_01_types_base.h"

void afficher_types() {
    int entier = 42;
    float decimal = 3.14f;
    double grand_decimal = 2.718281828;
    char caractere = 'A';
    char texte[] = "Hello";

    printf("=== Types de base ===\n");
    printf("int:    %d\n", entier);
    printf("float:  %.2f\n", decimal);
    printf("double: %.6f\n", grand_decimal);
    printf("char:   %c (code ASCII: %d)\n", caractere, caractere);
    printf("char[]: %s\n", texte);
}

void afficher_tailles() {
    printf("\n=== Tailles en octets ===\n");
    printf("sizeof(char):      %zu octet(s)\n", sizeof(char));
    printf("sizeof(int):       %zu octet(s)\n", sizeof(int));
    printf("sizeof(float):     %zu octet(s)\n", sizeof(float));
    printf("sizeof(double):    %zu octet(s)\n", sizeof(double));
    printf("sizeof(void*):     %zu octet(s)\n", sizeof(void*));
}

void afficher_limites() {
    printf("\n=== Limites des types ===\n");
    printf("INT_MAX:  %d\n", INT_MAX);
    printf("INT_MIN:  %d\n", INT_MIN);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
}

int main() {
    afficher_types();
    afficher_tailles();
    afficher_limites();

    return 0;
}