#include "ex_06_switch.h"
#include <stdio.h>

void tester_switch_simple() {
    int choix = 2;
    printf("=== Switch simple ===\n");
    printf("Choix = %d\n", choix);
    switch (choix) {
        case 1:
            printf("Vous avez choisi: Option 1\n");
            break;
        case 2:
            printf("Vous avez choisi: Option 2\n");
            break;
        case 3:
            printf("Vous avez choisi: Option 3\n");
            break;
    }
}

void tester_switch_avec_break() {
    int note = 2;
    printf("\n=== Switch avec break ===\n");
    printf("Note = %d\n", note);
    switch (note) {
        case 0:
        case 1:
        case 2:
            printf("Categorie: Insuffisant\n");
            break;
        case 3:
            printf("Categorie: Passable\n");
            break;
        case 4:
            printf("Categorie: Bien\n");
            break;
        case 5:
            printf("Categorie: Excellent\n");
            break;
    }
}

void tester_switch_avec_default() {
    int jour = 7;
    printf("\n=== Switch avec default ===\n");
    printf("Jour = %d\n", jour);
    switch (jour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Jour invalide\n");
            break;
    }
}

char get_jour_semaine(int jour) {
    switch (jour) {
        case 1: return 'L';
        case 2: return 'M';
        case 3: return 'M';
        case 4: return 'J';
        case 5: return 'V';
        case 6: return 'S';
        case 7: return 'D';
        default: return '?';
    }
}

int main() {
    tester_switch_simple();
    tester_switch_avec_break();
    tester_switch_avec_default();

    printf("\n=== Fonction avec switch ===\n");
    printf("Jour 3 -> %c\n", get_jour_semaine(3));
    printf("Jour 8 -> %c\n", get_jour_semaine(8));

    return 0;
}