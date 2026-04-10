#include "ex_10_tableau_2d.h"
#include <stdio.h>

void initialiser_matrice() {
    printf("=== Matrice 3x3 ===\n");
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

void matrice_avec_fonctions() {
    printf("\n=== Acces aux elements ===\n");
    int grille[2][3] = {{10, 20, 30}, {40, 50, 60}};

    printf("grille[0][0] = %d\n", grille[0][0]);
    printf("grille[1][2] = %d\n", grille[1][2]);
    printf("grille[0][2] = %d\n", grille[0][2]);
}

void transposee_matrice() {
    printf("\n=== Transposee ===\n");
    int original[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transposee[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transposee[j][i] = original[i][j];
        }
    }

    printf("Originale (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", original[i][j]);
        }
        printf("\n");
    }

    printf("Transposee (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", transposee[i][j]);
        }
        printf("\n");
    }
}

void addition_matrices() {
    printf("\n=== Addition de matrices ===\n");
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("A + B =\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

int main() {
    initialiser_matrice();
    matrice_avec_fonctions();
    transposee_matrice();
    addition_matrices();

    return 0;
}