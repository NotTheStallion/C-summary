#ifndef MACRO_H
#define MACRO_H

#define CARRE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define EST_PAIR(x) ((x) % 2 == 0)
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define CONCAT(a, b) a##b
#define STRING(x) #x
#define TRACE printf("Ligne %d\n", __LINE__)

void tester_macro_simple();
void tester_macro_math();
void tester_macro_condition();

#endif