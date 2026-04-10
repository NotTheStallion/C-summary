#ifndef LISTE_CHAINEE_H
#define LISTE_CHAINEE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
    int valeur;
    struct Noeud* suivant;
} Noeud;

Noeud* creer_noeud(int valeur);
void inserer_debut(Noeud** tete, int valeur);
void inserer_fin(Noeud** tete, int valeur);
void afficher_liste(Noeud* tete);
int longueur_liste(Noeud* tete);

#endif