#include "ex_04_comparaison.h"
#include <stdio.h>

void tester_egalite() {
    int a = 5, b = 5, c = 10;
    printf("=== Egalite ===\n");
    printf("%d == %d : %d (vrai)\n", a, b, a == b);
    printf("%d == %d : %d (faux)\n", a, c, a == c);
}

void tester_inegalite() {
    int a = 5, b = 5, c = 10;
    printf("\n=== Inegalite ===\n");
    printf("%d != %d : %d (faux)\n", a, b, a != b);
    printf("%d != %d : %d (vrai)\n", a, c, a != c);
}

void tester_comparaison() {
    int a = 5, b = 10;
    printf("\n=== Comparaison (< > <= >=) ===\n");
    printf("%d < %d : %d (vrai)\n", a, b, a < b);
    printf("%d > %d : %d (faux)\n", a, b, a > b);
    printf("%d <= %d : %d (vrai)\n", a, b, a <= b);
    printf("%d >= %d : %d (faux)\n", a, b, a >= b);
}

void tester_operateurs_logiques() {
    int x = 1, y = 0;
    printf("\n=== Operateurs logiques (&& || !) ===\n");
    printf("%d && %d = %d\n", x, y, x && y);
    printf("%d || %d = %d\n", x, y, x || y);
    printf("!%d = %d\n", x, !x);
    printf("!%d = %d\n", y, !y);
    printf("\nTables de verite:\n");
    printf("a  b  | a&&b | a||b\n");
    printf("0  0  |  %d   |  %d\n", 0&&0, 0||0);
    printf("0  1  |  %d   |  %d\n", 0&&1, 0||1);
    printf("1  0  |  %d   |  %d\n", 1&&0, 1||0);
    printf("1  1  |  %d   |  %d\n", 1&&1, 1||1);
}

int main() {
    tester_egalite();
    tester_inegalite();
    tester_comparaison();
    tester_operateurs_logiques();

    return 0;
}