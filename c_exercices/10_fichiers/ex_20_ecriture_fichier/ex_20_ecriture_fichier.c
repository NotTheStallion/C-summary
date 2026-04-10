#include "ex_20_ecriture_fichier.h"
#include <string.h>

void ecrire_texte_simple() {
    printf("=== Ecriture de texte simple ===\n");
    
    FILE* fichier = fopen("exemple.txt", "w");
    if (fichier == NULL) {
        printf("Erreur: impossible d'ouvrir le fichier\n");
        return;
    }

    fprintf(fichier, "Bonjour le monde!\n");
    fprintf(fichier, "Ceci est un fichier texte.\n");
    
    fclose(fichier);
    printf("Fichier 'exemple.txt' cree avec succes.\n");
}

void ecrire_lignes() {
    printf("\n=== Ecriture de plusieurs lignes ===\n");
    
    FILE* fp = fopen("lignes.txt", "w");
    if (fp == NULL) {
        printf("Erreur d'ouverture\n");
        return;
    }

    const char* lignes[] = {
        "Ligne 1: Premier jour",
        "Ligne 2: Deuxieme jour",
        "Ligne 3: Troisieme jour"
    };

    for (int i = 0; i < 3; i++) {
        fprintf(fp, "%s\n", lignes[i]);
    }

    fclose(fp);
    printf("Fichier 'lignes.txt' cree.\n");
}

void ecrire_formate() {
    printf("\n=== Ecriture formatee ===\n");
    
    FILE* fp = fopen("donnees.txt", "w");
    if (fp == NULL) return;

    fprintf(fp, "Nom| Age| Note\n");
    fprintf(fp, "----|----|----\n");
    fprintf(fp, "Alice| 20| 15.5\n");
    fprintf(fp, "Bob  | 22| 14.0\n");
    fprintf(fp, "Claire| 19| 16.5\n");

    fclose(fp);
    printf("Fichier 'donnees.txt' cree.\n");
}

void ecrire_tableau() {
    printf("\n=== Ecriture de tableau de donnees ===\n");
    
    FILE* fp = fopen("tableau.txt", "w");
    if (fp == NULL) return;

    int valeurs[] = {10, 20, 30, 40, 50};
    int taille = 5;

    for (int i = 0; i < taille; i++) {
        fprintf(fp, "%d\n", valeurs[i]);
    }

    fclose(fp);
    printf("Fichier 'tableau.txt' cree.\n");
}

int main() {
    ecrire_texte_simple();
    ecrire_lignes();
    ecrire_formate();
    ecrire_tableau();

    printf("\n=== Fichiers crees avec succes ===\n");
    return 0;
}