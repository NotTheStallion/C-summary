# Exercice 11: Fonctions simples

## Objectif
Comprendre la définition et l'appel de fonctions.

## Structure d'une fonction
```c
type_retour nom_fonction(parametres) {
    // corps de la fonction
    return valeur;
}
```

## Types de retour
- `int`, `float`, `double`, `char` : retourne une valeur
- `void` : ne retourne rien

## Programme à exécuter
Appels de fonctions avec et sans retour, démonstration de récursion.

## Compilation
```bash
cd 06_fonctions/ex_11_fonction_simple
make
./ex_11_fonction_simple
```

## Questions
1. Que se passe-t-il si on omet le `return` dans une fonction non-void ?
2. Quelle est la différence entre paramètres et arguments ?
3. Qu'est-ce que la récursion ?