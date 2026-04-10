# Exercice 01: Types de base

## Objectif
Découvrir les types fondamentaux du C : `int`, `float`, `double`, `char`.

## Notions à retenir
- **int** : nombres entiers (positifs ou négatifs)
- **float** : nombres décimaux (simple précision)
- **double** : nombres décimaux (double précision)
- **char** : un seul caractère (stocké comme un entier ASCII)
- **sizeof()** : opérateur donnant la taille en octets d'un type

## Programme à compléter
Le code affiche les types, leurs tailles et leurs limites. Observer les valeurs.

## Compilation
```bash
gcc -Wall -o ex_01 ex_01_types_base.c
./ex_01
```

## Questions
1. Pourquoi `char` est-il aussi un type numérique ?
2. Quelle est la différence entre `float` et `double` ?
3. Peut-on stocker des nombres négatifs dans un `unsigned int` ?