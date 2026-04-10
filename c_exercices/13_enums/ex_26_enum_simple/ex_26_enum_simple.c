#include "ex_26_enum_simple.h"

void afficher_jour(enum Jour j) {
    switch(j) {
        case LUNDI:    printf("Lundi"); break;
        case MARDI:    printf("Mardi"); break;
        case MERCREDI: printf("Mercredi"); break;
        case JEUDI:    printf("Jeudi"); break;
        case VENDREDI: printf("Vendredi"); break;
        case SAMEDI:   printf("Samedi"); break;
        case DIMANCHE: printf("Dimanche"); break;
    }
}

enum Jour jour_suivant(enum Jour j) {
    return (j + 1) % 7;
}

const char* nom_couleur(enum Couleur c) {
    switch(c) {
        case ROUGE: return "Rouge";
        case VERT:  return "Vert";
        case BLEU:  return "Bleu";
        default:    return "Inconnu";
    }
}

int main() {
    printf("=== Enumerations simples ===\n");
    
    enum Jour aujourdhui = MERCREDI;
    printf("Aujourd'hui: ");
    afficher_jour(aujourdhui);
    printf("\n");

    enum Jour demain = jour_suivant(aujourdhui);
    printf("Demain: ");
    afficher_jour(demain);
    printf("\n");

    printf("\n=== Valeurs des enums ===\n");
    printf("LUNDI = %d, MARDI = %d\n", LUNDI, MARDI);
    printf("DEBUTANT = %d, INTERMEDIAIRE = %d\n", DEBUTANT, INTERMEDIAIRE);

    printf("\n=== Couleurs ===\n");
    for (enum Couleur c = ROUGE; c <= BLEU; c++) {
        printf("Couleur %d: %s\n", c, nom_couleur(c));
    }

    return 0;
}