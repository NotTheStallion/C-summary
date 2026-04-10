#include "ex_19_typedef_struct.h"

void creer_voiture() {
    printf("=== typedef avec structures ===\n");
    
    Voiture v1 = {"Renault", "Clio", 2022, 15000.0};
    Voiture v2;

    strcpy(v2.marque, "Peugeot");
    strcpy(v2.modele, "208");
    v2.annee = 2023;
    v2.prix = 17500.0;

    printf("Voiture 1: %s %s (%d) - %.2f EUR\n", 
           v1.marque, v1.modele, v1.annee, v1.prix);
    printf("Voiture 2: %s %s (%d) - %.2f EUR\n", 
           v2.marque, v2.modele, v2.annee, v2.prix);
}

void creer_date() {
    printf("\n=== Date avec typedef ===\n");
    Date today = {10, 4, 2026};
    Date creation = {1, 1, 2020};

    printf("Aujourd'hui: %02d/%02d/%04d\n", 
           today.jour, today.mois, today.annee);
    printf("Creation: %02d/%02d/%04d\n", 
           creation.jour, creation.mois, creation.annee);
}

void comparer_villes() {
    printf("\n=== Tableau de typedef ===\n");
    Ville villes[] = {
        {"Paris", 2200000},
        {"Lyon", 520000},
        {"Marseille", 870000}
    };
    int nb_villes = sizeof(villes) / sizeof(villes[0]);

    Ville la_plus_grande = villes[0];
    for (int i = 1; i < nb_villes; i++) {
        if (villes[i].population > la_plus_grande.population) {
            la_plus_grande = villes[i];
        }
    }

    printf("Ville la plus grande: %s (%d hab.)\n", 
           la_plus_grande.nom, la_plus_grande.population);
}

char* formater_date(Date d) {
    static char buffer[20];
    sprintf(buffer, "%02d/%02d/%04d", d.jour, d.mois, d.annee);
    return buffer;
}

int main() {
    creer_voiture();
    creer_date();
    comparer_villes();

    Date d = {15, 8, 2024};
    printf("\nDate formatee: %s\n", formater_date(d));

    return 0;
}