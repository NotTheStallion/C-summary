# Exercice 16: Chaînes de caractères

## Objectif
Maîtriser les chaînes de caractères en C.

## Déclaration
```c
char ch[] = "texte";    // Avec espace pour \0
char ch[100] = "texte"; // Taille fixe
char ch[] = {'t','e','x','t','e','\0'}; // Caractere par caractere
```

## Caractère de fin
Toute chaîne doit se terminer par '\0' (caractère nul).

## Fonctions de la bibliothèque standard
- `strlen(s)` : longueur de la chaîne
- `sizeof(s)` : taille du tableau (incluant \0)

## Programme à exécuter
Déclaration, initialisation, parcours et chaîne nulle.

## Compilation
```bash
cd 08_chaines/ex_16_chaine_caracteres
make
./ex_16_chaine_caracteres
```

## Questions
1. Pourquoi le caractère '\0' est-il nécessaire ?
2. Quelle est la différence entre strlen et sizeof ?
3. Peut-on modifier une chaîne déclarée avec "texte" ?