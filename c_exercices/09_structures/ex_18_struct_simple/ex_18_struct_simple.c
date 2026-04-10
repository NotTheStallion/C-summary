#include "ex_18_struct_simple.h"

void creer_etudiant() {
    printf("=== Creation de structures ===\n");
    
    struct Etudiant e1;
    strcpy(e1.nom, "Alice");
    e1.age = 20;
    e1.moyenne = 15.5;

    printf("Etudiant 1:\n");
    printf("  Nom: %s\n", e1.nom);
    printf("  Age: %d\n", e1.age);
    printf("  Moyenne: %.2f\n", e1.moyenne);

    struct Etudiant e2 = {"Bob", 22, 14.0};
    printf("\nEtudiant 2:\n");
    printf("  Nom: %s\n", e2.nom);
    printf("  Age: %d\n", e2.age);
    printf("  Moyenne: %.2f\n", e2.moyenne);
}

void afficher_etudiant(struct Etudiant e) {
    printf("  Nom: %s, Age: %d, Moyenne: %.2f\n", e.nom, e.age, e.moyenne);
}

void modifier_etudiant() {
    printf("\n=== Modification de structures ===\n");
    struct Etudiant e = {"Claire", 19, 16.5};
    
    printf("Avant: ");
    afficher_etudiant(e);

    e.age = 20;
    e.moyenne = 17.0;
    strcpy(e.nom, "Claire B.");

    printf("Apres: ");
    afficher_etudiant(e);
}

void tableau_structures() {
    printf("\n=== Tableau de structures ===\n");
    struct Etudiant promotion[3] = {
        {"Alice", 20, 15.5},
        {"Bob", 21, 14.0},
        {"Charlie", 19, 16.5}
    };

    for (int i = 0; i < 3; i++) {
        printf("Etudiant %d: ", i + 1);
        afficher_etudiant(promotion[i]);
    }
}

int main() {
    creer_etudiant();
    modifier_etudiant();
    tableau_structures();

    return 0;
}