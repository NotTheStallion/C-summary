# Exercice 09: Tableaux unidimensionnels

## Objectif
Maîtriser les tableaux statiques en C.

## Déclaration
```c
int tableau[10];        //Tableau de 10 entiers (non initialise)
int valeurs[] = {1,2,3}; //Tableau taille automatique
```

## Accès aux éléments
- Indexation commence à 0
- `tableau[0]` = premier élément
- `tableau[n-1]` = dernier élément (si taille n)

## Points importants
- Pas de vérification de limites en C
- sizeof(tableau) donne la taille totale en octets
- Pour le nombre d'éléments: `sizeof(tab) / sizeof(tab[0])`

## Programme à exécuter
Démontre initialisation, parcours, recherche et fonctions.

## Compilation
```bash
cd 05_tableaux/ex_09_tableau_1d
make
./ex_09_tableau_1d
```

## Questions
1. Que se passe-t-il si on accède à tableau[10] ?
2. Pourquoi les tableaux C commencent-ils à 0 ?
3. Comment passer un tableau à une fonction ?