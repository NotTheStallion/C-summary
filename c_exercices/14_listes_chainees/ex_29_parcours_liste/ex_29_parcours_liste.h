#ifndef PARCOURS_LISTE_H
#define PARCOURS_LISTE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Noeud {
    int valeur;
    struct Noeud* suivant;
} Noeud;

void liberer_liste(Noeud* tete);
Noeud* rechercher(Noeud* tete, int valeur);
void supprimer_debut(Noeud** tete);
void supprimer_valeur(Noeud** tete, int valeur);
Noeud* inverser_liste(Noeud* tete);

#endif