#include "calculatrice.h"

int ajouter(int a, int b) { return a + b; }
int soustraire(int a, int b) { return a - b; }
int multiplier(int a, int b) { return a * b; }

double diviser(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (double)a / b;
}