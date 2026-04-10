#ifndef CONSTANTES_H
#define CONSTANTES_H

#define PI 3.14159f
#define MAX_SCORE 100
#define MESSAGE "Bonjour le monde!"
#define VRAI 1
#define FAUX 0

extern const int TAILLE_PAR_DEFAUT;
extern const float TAUX_TVA;

void afficher_constantes();
int get_taille_par_defaut();
float get_taux_tva();

#endif