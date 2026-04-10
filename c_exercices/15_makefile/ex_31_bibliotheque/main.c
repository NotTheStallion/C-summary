#include "bibliotheque.h"

int main() {
    afficher_accueil();
    
    printf("\nTest de la fonction calculer_somme:\n");
    printf("5 + 3 = %d\n", calculer_somme(5, 3));
    printf("10 + 20 = %d\n", calculer_somme(10, 20));
    
    printf("\n");
    afficher_a_propos();
    
    return 0;
}