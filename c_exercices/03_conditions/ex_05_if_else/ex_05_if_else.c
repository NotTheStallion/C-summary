#include "ex_05_if_else.h"
#include <stdio.h>

void tester_condition_simple() {
    int age = 18;
    printf("=== Condition simple ===\n");
    if (age >= 18) {
        printf("Vous etes majeur\n");
    }
    printf("Age: %d\n", age);
}

void tester_else_if() {
    int note = 15;
    printf("\n=== if - else if - else ===\n");
    if (note >= 16) {
        printf("Mention: Tres bien\n");
    } else if (note >= 14) {
        printf("Mention: Bien\n");
    } else if (note >= 12) {
        printf("Mention: Assez bien\n");
    } else if (note >= 10) {
        printf("Mention: Passable\n");
    } else {
        printf("Mention: Insuffisant\n");
    }
}

void tester_conditions_imbriquees() {
    int age = 25;
    int revenus = 30000;
    printf("\n=== Conditions imbriquees ===\n");
    if (age >= 18) {
        if (revenus > 20000) {
            printf("Eligible au credit\n");
        } else {
            printf("Age OK, revenus insuffisants\n");
        }
    } else {
        printf("Mineur, non eligible\n");
    }
}

void tester_operateurs_logiques_condition() {
    int age = 30;
    printf("\n=== Operateurs logiques dans conditions ===\n");
    if (age >= 18 && age <= 65) {
        printf("Age valide pour le travail\n");
    }
    if (age < 18 || age > 65) {
        printf("Age hors plage de travail\n");
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int est_pair(int n) {
    return (n % 2 == 0);
}

int main() {
    tester_condition_simple();
    tester_else_if();
    tester_conditions_imbriquees();
    tester_operateurs_logiques_condition();

    printf("\n=== Fonctions avec retour ===\n");
    printf("max(5, 8) = %d\n", max(5, 8));
    printf("est_pair(4) = %d\n", est_pair(4));
    printf("est_pair(7) = %d\n", est_pair(7));

    return 0;
}