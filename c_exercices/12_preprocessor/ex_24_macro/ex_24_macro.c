#include "ex_24_macro.h"
#include <stdio.h>

void tester_macro_simple() {
    printf("=== Macros simples ===\n");
    printf("CARRE(5) = %d\n", CARRE(5));
    printf("CARRE(3+2) = %d (evite: %d)\n", CARRE(3+2), (3+2)*(3+2));
    printf("MAX(10, 20) = %d\n", MAX(10, 20));
    printf("MIN(10, 20) = %d\n", MIN(10, 20));
}

void tester_macro_math() {
    printf("\n=== Macros mathematiques ===\n");
    printf("ABS(-5) = %d\n", ABS(-5));
    printf("ABS(7) = %d\n", ABS(7));
    printf("EST_PAIR(8) = %d\n", EST_PAIR(8));
    printf("EST_PAIR(7) = %d\n", EST_PAIR(7));
}

void tester_macro_condition() {
    printf("\n=== Macros de condition ===\n");
    int a = 15, b = 10;
    int max = MAX(a, b);
    int min = MIN(a, b);
    printf("a=%d, b=%d -> MAX=%d, MIN=%d\n", a, b, max, min);
}

int main() {
    tester_macro_simple();
    tester_macro_math();
    tester_macro_condition();

    printf("\n=== Concaténation et Stringification ===\n");
    int xy = 42;
    printf("CONCAT(x, y) cree variable: xy = %d\n", xy);
    printf("STRING(CARRE) = %s\n", STRING(CARRE));

    printf("\n=== Macros predefinies ===\n");
    printf("__LINE__ = %d\n", __LINE__);
    printf("__FILE__ = %s\n", __FILE__);
    printf("__DATE__ = %s\n", __DATE__);
    printf("__TIME__ = %s\n", __TIME__);

    return 0;
}