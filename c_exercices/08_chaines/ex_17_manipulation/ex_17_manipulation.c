#include "ex_17_manipulation.h"

void demonstration_strcpy() {
    printf("=== strcpy (copie) ===\n");
    char src[] = "Bonjour";
    char dest[50];
    
    strcpy(dest, src);
    printf("src:  '%s'\n", src);
    printf("dest: '%s'\n", dest);

    strncpy(dest, "Salut", 3);
    dest[3] = '\0';
    printf("strncpy (3 chars): '%s'\n", dest);
}

void demonstration_strcat() {
    printf("\n=== strcat (concaténation) ===\n");
    char bonjour[50] = "Bonjour";
    strcat(bonjour, " le monde");
    printf("Resultat: '%s'\n", bonjour);

    char a[] = "Hello";
    char b[] = " ";
    char c[] = "World";
    char result[100];
    
    strcpy(result, a);
    strcat(result, b);
    strcat(result, c);
    printf("Concatene: '%s'\n", result);
}

void demonstration_strcmp() {
    printf("\n=== strcmp (comparaison) ===\n");
    printf("strcmp(\"abc\", \"abc\") = %d (egal)\n", strcmp("abc", "abc"));
    printf("strcmp(\"abc\", \"abd\") = %d (abc < abd)\n", strcmp("abc", "abd"));
    printf("strcmp(\"abe\", \"abd\") = %d (abe > abd)\n", strcmp("abe", "abd"));
    printf("strcmp(\"abc\", \"ab\")  = %d (abc > ab)\n", strcmp("abc", "ab"));
    printf("strcmp(\"ABC\", \"abc\") = %d (sensitif a la casse)\n", strcmp("ABC", "abc"));
}

void demonstration_sprintf() {
    printf("\n=== sprintf (formatage) ===\n");
    char buffer[200];
    int age = 30;
    float taille = 1.75;
    
    sprintf(buffer, "Age: %d ans, Taille: %.2fm", age, taille);
    printf("buffer: '%s'\n", buffer);

    sprintf(buffer, "Hexa: %x, Octal: %o", 255, 255);
    printf("Hexa/Octal: '%s'\n", buffer);
}

void demonstration_substrings() {
    printf("\n=== Recherche dans chaines ===\n");
    char texte[] = "Bonjour le monde";
    char* ptr = strstr(texte, "monde");
    
    if (ptr != NULL) {
        printf("Trouve 'monde' a la position: %ld\n", ptr - texte);
        printf("Sous-chaine: '%s'\n", ptr);
    }

    char email[] = "utilisateur@exemple.com";
    char* at = strchr(email, '@');
    if (at != NULL) {
        printf("Domaine: '%s'\n", at + 1);
    }
}

int main() {
    demonstration_strcpy();
    demonstration_strcat();
    demonstration_strcmp();
    demonstration_sprintf();
    demonstration_substrings();

    return 0;
}