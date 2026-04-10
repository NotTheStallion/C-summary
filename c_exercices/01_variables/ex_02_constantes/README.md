# Exercice 02: Constantes

## Objectif
Comprendre la différence entre les constantes symboliques (`#define`) et les variables `const`.

## Notions à retenir
- **#define** : substitution textuelle (pas de type, pas de mémoire)
- **const** : variable en lecture seule (typeisé, vérifié par le compilateur)
- Les constantes permettent d'éviter les "nombres magiques" dans le code

## Différence clé
```c
#define PI 3.14      // Remplace PI par 3.14 everywhere
const float pi = 3.14;  // Variable en lecture seule
```

## Programme à exécuter
Le code démontre l'utilisation des deux types de constantes.

## Compilation
```bash
cd 01_variables/ex_02_constantes
make
./ex_02_constantes
```

## Questions
1. Pourquoi `#define` n'a pas de type ?
2. Quelle méthode est préférée en C moderne ?
3. Peut-on modifier une variable `const` avec un pointeur ?