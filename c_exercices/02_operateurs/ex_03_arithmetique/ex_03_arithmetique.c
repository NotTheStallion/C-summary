#include "ex_03_arithmetique.h"

void demonstration_addition() {
    int a = 10, b = 5;
    printf("=== Addition ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("a += 3: %d\n", a += 3);
}

void demonstration_soustraction() {
    int a = 10, b = 5;
    printf("\n=== Soustraction ===\n");
    printf("%d - %d = %d\n", a, b, a - b);
    printf("a -= 3: %d\n", a -= 3);
}

void demonstration_multiplication() {
    int a = 6, b = 7;
    printf("\n=== Multiplication ===\n");
    printf("%d * %d = %d\n", a, b, a * b);
    printf("a *= 2: %d\n", a *= 2);
}

void demonstration_division() {
    int a = 20, b = 3;
    float c = 20.0f;
    printf("\n=== Division ===\n");
    printf("%d / %d = %d (entiere)\n", a, b, a / b);
    printf("%.1f / %d = %.2f (reelle)\n", c, b, c / b);
    printf("20 / 3.0 = %.2f\n", 20.0 / 3.0);
}

void demonstration_modulo() {
    int a = 17, b = 5;
    printf("\n=== Modulo ===\n");
    printf("%d %% %d = %d (reste de la division)\n", a, b, a % b);
    printf("15 %% 4 = %d\n", 15 % 4);
    printf("20 %% 7 = %d\n", 20 % 7);
}

void demonstration_incrementation() {
    int a = 5;
    printf("\n=== Incrémentation ===\n");
    printf("a = %d\n", a);
    printf("++a (pre-increment): %d, a = %d\n", ++a, a);
    a = 5;
    printf("a++ (post-increment): %d, a = %d\n", a++, a);
    a = 5;
    printf("--a (pre-decrement): %d, a = %d\n", --a, a);
    a = 5;
    printf("a-- (post-decrement): %d, a = %d\n", a--, a);
}

int main() {
    demonstration_addition();
    demonstration_soustraction();
    demonstration_multiplication();
    demonstration_division();
    demonstration_modulo();
    demonstration_incrementation();

    return 0;
}