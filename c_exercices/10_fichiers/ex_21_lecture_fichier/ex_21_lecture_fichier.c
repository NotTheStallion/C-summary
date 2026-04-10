#include "ex_21_lecture_fichier.h"
#include <string.h>

void lire_ligne_par_ligne() {
    printf("=== Lecture avec fgets ===\n");
    
    FILE* fp = fopen("exemple.txt", "r");
    if (fp == NULL) {
        printf("Fichier exemple.txt non trouve.\n");
        return;
    }

    char ligne[256];
    while (fgets(ligne, sizeof(ligne), fp) != NULL) {
        printf(">>> %s", ligne);
    }

    fclose(fp);
}

void lire_mot_par_mot() {
    printf("\n=== Lecture avec fscanf ===\n");
    
    FILE* fp = fopen("donnees.txt", "r");
    if (fp == NULL) {
        printf("Fichier donnees.txt non trouve.\n");
        return;
    }

    char mot[50];
    while (fscanf(fp, "%s", mot) == 1) {
        printf("Mot: %s\n", mot);
    }

    fclose(fp);
}

void lire_formate() {
    printf("\n=== Lecture formatee ===\n");
    
    FILE* fp = fopen("donnees.txt", "r");
    if (fp == NULL) return;

    char nom[50];
    int age;
    float note;
    char ligne[100];
    
    fgets(ligne, sizeof(ligne), fp);
    fgets(ligne, sizeof(ligne), fp);
    
    while (fscanf(fp, "%s %d %f", nom, &age, &note) == 3) {
        printf("Nom: %s, Age: %d, Note: %.1f\n", nom, age, note);
    }

    fclose(fp);
}

void lire_jusqu_fin() {
    printf("\n=== Lecture avec feof ===\n");
    
    FILE* fp = fopen("tableau.txt", "r");
    if (fp == NULL) return;

    int valeur;
    int ligne = 1;
    
    while (!feof(fp)) {
        if (fscanf(fp, "%d", &valeur) == 1) {
            printf("Ligne %d: %d\n", ligne++, valeur);
        }
    }

    fclose(fp);
}

int main() {
    printf("lecture de fichiers precedemment crees.\n\n");
    lire_ligne_par_ligne();
    lire_mot_par_mot();
    lire_formate();
    lire_jusqu_fin();

    return 0;
}