#ifndef ENUM_SIMPLE_H
#define ENUM_SIMPLE_H

#include <stdio.h>

enum Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE };
enum Couleur { ROUGE = 0, VERT = 1, BLEU = 2 };
enum Niveau { DEBUTANT = 1, INTERMEDIAIRE, AVANCE, EXPERT };

void afficher_jour(enum Jour j);
enum Jour jour_suivant(enum Jour j);
const char* nom_couleur(enum Couleur c);

#endif