#include "ex_27_enum_switch.h"

const char* coup_to_string(Coup c) {
    switch(c) {
        case PIERRRE: return "Pierre";
        case FEUILLE: return "Feuille";
        case CISEAUX: return "Ciseaux";
        default: return "Inconnu";
    }
}

Resultat jouer(Coup joueur, Coup ordi) {
    if (joueur == ordi) return NULLE;
    
    if ((joueur == PIERRRE && ordi == CISEAUX) ||
        (joueur == FEUILLE && ordi == PIERRRE) ||
        (joueur == CISEAUX && ordi == FEUILLE)) {
        return GAGNEE;
    }
    return PERDUE;
}

void afficher_resultat(Resultat r) {
    switch(r) {
        case GAGNEE:  printf("Vous avez gagne!\n"); break;
        case PERDUE:  printf("Vous avez perdu.\n"); break;
        case NULLE:   printf("Match nul.\n"); break;
    }
}

int main() {
    printf("=== Pierre-Feuille-Ciseaux avec enum ===\n");

    Coup mes_coups[] = {PIERRRE, FEUILLE, CISEAUX};
    Coup ordi = CISEAUX;

    for (int i = 0; i < 3; i++) {
        printf("\nVous jouez: %s vs Ordinateur: %s\n", 
               coup_to_string(mes_coups[i]), coup_to_string(ordi));
        
        Resultat resultat = jouer(mes_coups[i], ordi);
        afficher_resultat(resultat);
    }

    printf("\n=== Enum avec differents types ===\n");
    printf("sizeof(Coup) = %zu\n", sizeof(Coup));
    printf("sizeof(Resultat) = %zu\n", sizeof(Resultat));

    return 0;
}