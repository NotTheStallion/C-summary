#ifndef STRUCT_SIMPLE_H
#define STRUCT_SIMPLE_H

#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    int age;
    float moyenne;
};

void creer_etudiant();
void afficher_etudiant();
void modifier_etudiant();
void tableau_structures();

#endif