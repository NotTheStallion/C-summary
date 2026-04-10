#include "ex_29_parcours_liste.h"

void liberer_liste(Noeud* tete) {
    Noeud* courant;
    while (tete != NULL) {
        courant = tete;
        tete = tete->suivant;
        free(courant);
    }
    printf("Liste liberee.\n");
}

Noeud* rechercher(Noeud* tete, int valeur) {
    while (tete != NULL) {
        if (tete->valeur == valeur) {
            return tete;
        }
        tete = tete->suivant;
    }
    return NULL;
}

void supprimer_debut(Noeud** tete) {
    if (*tete == NULL) return;
    
    Noeud* temp = *tete;
    *tete = (*tete)->suivant;
    free(temp);
}

void supprimer_valeur(Noeud** tete, int valeur) {
    if (*tete == NULL) return;

    if ((*tete)->valeur == valeur) {
        supprimer_debut(tete);
        return;
    }

    Noeud* courant = *tete;
    while (courant->suivant != NULL) {
        if (courant->suivant->valeur == valeur) {
            Noeud* temp = courant->suivant;
            courant->suivant = temp->suivant;
            free(temp);
            return;
        }
        courant = courant->suivant;
    }
}

Noeud* inverser_liste(Noeud* tete) {
    Noeud* precedent = NULL;
    Noeud* courant = tete;
    Noeud* suivant = NULL;

    while (courant != NULL) {
        suivant = courant->suivant;
        courant->suivant = precedent;
        precedent = courant;
        courant = suivant;
    }
    return precedent;
}

int main() {
    printf("=== Parcours et manipulation de listes ===\n");

    Noeud* liste = NULL;
    for (int i = 1; i <= 5; i++) {
        Noeud* n = malloc(sizeof(Noeud));
        n->valeur = i * 10;
        n->suivant = liste;
        liste = n;
    }

    printf("Liste initiale: ");
    Noeud* tmp = liste;
    while (tmp) { printf("%d -> ", tmp->valeur); tmp = tmp->suivant; }
    printf("NULL\n");

    Noeud* trouve = rechercher(liste, 30);
    printf("Recherche 30: %s\n", trouve ? "Trouve" : "Non trouve");

    printf("\nApres suppression debut: ");
    supprimer_debut(&liste);
    tmp = liste;
    while (tmp) { printf("%d -> ", tmp->valeur); tmp = tmp->suivant; }
    printf("NULL\n");

    printf("Apres suppression valeur 30: ");
    supprimer_valeur(&liste, 30);
    tmp = liste;
    while (tmp) { printf("%d -> ", tmp->valeur); tmp = tmp->suivant; }
    printf("NULL\n");

    printf("Liste inversee: ");
    liste = inverser_liste(liste);
    tmp = liste;
    while (tmp) { printf("%d -> ", tmp->valeur); tmp = tmp->suivant; }
    printf("NULL\n");

    liberer_liste(liste);
    return 0;
}