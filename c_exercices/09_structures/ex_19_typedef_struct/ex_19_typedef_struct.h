#ifndef TYPEDEF_STRUCT_H
#define TYPEDEF_STRUCT_H

#include <stdio.h>
#include <string.h>

typedef struct {
    char marque[50];
    char modele[50];
    int annee;
    float prix;
} Voiture;

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char nom[50];
    int population;
} Ville;

void creer_voiture();
void creer_date();
void comparer_villes();
char* formater_date(Date d);

#endif