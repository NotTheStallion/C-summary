#include "ex_28_liste_chainee.h"

Noeud* creer_noeud(int valeur) {
    Noeud* nouveau = (Noeud*)malloc(sizeof(Noeud));
    if (nouveau == NULL) {
        printf("Erreur d'allocation\n");
        return NULL;
    }
    nouveau->valeur = valeur;
    nouveau->suivant = NULL;
    return nouveau;
}

void inserer_debut(Noeud** tete, int valeur) {
    Noeud* nouveau = creer_noeud(valeur);
    if (nouveau == NULL) return;
    
    nouveau->suivant = *tete;
    *tete = nouveau;
}

void inserer_fin(Noeud** tete, int valeur) {
    Noeud* nouveau = creer_noeud(valeur);
    if (nouveau == NULL) return;

    if (*tete == NULL) {
        *tete = nouveau;
        return;
    }

    Noeud* courant = *tete;
    while (courant->suivant != NULL) {
        courant = courant->suivant;
    }
    courant->suivant = nouveau;
}

void afficher_liste(Noeud* tete) {
    printf("Liste: ");
    while (tete != NULL) {
        printf("%d", tete->valeur);
        if (tete->suivant != NULL) printf(" -> ");
        tete = tete->suivant;
    }
    printf(" -> NULL\n");
}

int longueur_liste(Noeud* tete) {
    int count = 0;
    while (tete != NULL) {
        count++;
        tete = tete->suivant;
    }
    return count;
}

int main() {
    printf("=== Listes chainees ===\n");

    Noeud* liste = NULL;

    printf("\nInsertion a la fin: ");
    inserer_fin(&liste, 10);
    inserer_fin(&liste, 20);
    inserer_fin(&liste, 30);
    afficher_liste(liste);
    printf("Longueur: %d\n", longueur_liste(liste));

    printf("\nInsertion au debut: ");
    inserer_debut(&liste, 5);
    afficher_liste(liste);
    printf("Longueur: %d\n", longueur_liste(liste));

    free(liste);
    return 0;
}