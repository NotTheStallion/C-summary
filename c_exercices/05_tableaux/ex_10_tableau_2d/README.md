# Exercice 10: Tableaux bidimensionnels (matrices)

## Objectif
Maîtriser les tableaux 2D en C (matrices).

## Déclaration
```c
int matrice[3][3];           // 3 lignes, 3 colonnes
int grille[2][3] = {{1,2,3},{4,5,6}};
```

## Accès aux éléments
- `matrice[ligne][colonne]`
- Les indices commencent à 0 dans les deux dimensions
- Mémoire stockée en ordre "row-major" (ligne par ligne)

## Programme à exécuter
Affiche des matrices, calcule la transposée et l'addition.

## Compilation
```bash
cd 05_tableaux/ex_10_tableau_2d
make
./ex_10_tableau_2d
```

## Questions
1. Comment sont stockés les éléments en mémoire ?
2. Peut-on avoir un tableau 3D ? Comment ?
3. Comment passer une matrice à une fonction ?