# Exercice 23: Realloc et redimensionnement dynamique

## Objectif
Maîtriser realloc pour redimensionner la mémoire allouée.

## realloc
```c
nouveau = realloc(ancien, nouvelle_taille);
```
- Agrandit ou réduit le bloc de mémoire
- Préserve les données existantes
- Retourne NULL en cas d'échec

## Utilisation typique
Tableau dynamique qui grandit:
```c
if (taille >= capacite) {
    capacite *= 2;
    tab = realloc(tab, capacite * sizeof(int));
}
```

## Programme à exécuter
Démontre agrandissement, réduction et ajout progressif.

## Compilation
```bash
cd 11_malloc/ex_23_realloc
make
./ex_23_realloc
```

## Questions
1. Que se passe-t-il si realloc échoue ?
2. Pourquoi realloc peut-il être lent ?
3. Quelle différence entre realloc(NULL, size) et malloc ?