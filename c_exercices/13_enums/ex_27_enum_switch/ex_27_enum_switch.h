#ifndef ENUM_SWITCH_H
#define ENUM_SWITCH_H

#include <stdio.h>

typedef enum {
    PIERRRE = 1,
    FEUILLE = 2,
    CISEAUX = 3
} Coup;

typedef enum {
    GAGNEE,
    PERDUE,
    NULLE
} Resultat;

const char* coup_to_string(Coup c);
Resultat jouer(Coup joueur, Coup ordi);
void afficher_resultat(Resultat r);

#endif