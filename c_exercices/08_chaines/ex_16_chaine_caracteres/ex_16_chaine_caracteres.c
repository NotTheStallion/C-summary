#include "ex_16_chaine_caracteres.h"

void declaration_chaine() {
    printf("=== Declaration de chaines ===\n");
    char ch1[] = "Bonjour";
    char ch2[50] = "Hello";
    char ch3[20];

    printf("ch1: %s (taille: %zu)\n", ch1, sizeof(ch1));
    printf("ch2: %s (taille: %zu)\n", ch2, sizeof(ch2));
    printf("ch3: non initialise\n");
}

void initialisation_chaine() {
    printf("\n=== Initialisation ===\n");
    char message[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    printf("Caractere par caractere: %s\n", message);

    char tableau[] = "Test";
    printf("Avec initialisation simple: %s\n", tableau);
}

void parcours_chaine() {
    printf("\n=== Parcours de chaine ===\n");
    char texte[] = "Hello";
    int i = 0;

    printf("Caracteres: ");
    while (texte[i] != '\0') {
        printf("%c ", texte[i]);
        i++;
    }
    printf("\n");

    printf("Longueur (strlen): %zu\n", strlen(texte));
}

void cadenas_caracteres() {
    printf("\n=== Caracteres speciaux ===\n");
    printf("Tabulation:\tici\n");
    printf("Nouvelle ligne:\nici\n");
    printf("Guillemets: \"texte\"\n");
    printf("Slash: \\n\n");
    printf("Caractere nul: \\0\n");
}

int compte_voyelles(const char* str) {
    int count = 0;
    while (*str != '\0') {
        char c = *str;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    declaration_chaine();
    initialisation_chaine();
    parcours_chaine();
    cadenas_caracteres();

    char test[] = "Education";
    printf("\n=== Fonction compte_voyelles ===\n");
    printf("Voyelles dans '%s': %d\n", test, compte_voyelles(test));

    return 0;
}