# Exercice 29: Parcours et libération de listes

## Objectif
Maîtriser le parcours, la recherche et la libération des listes chaînées.

## Opérations de parcours
- **Parcourir** : while(ptr != NULL) { ... ptr = ptr->suivant; }
- **Rechercher** : retourne le nœud ou NULL
- **Longueur** : compteur lors du parcours

## Libération
Toujours libérer chaque nœud pour éviter les fuites mémoire:
```c
while (tete != NULL) {
    temp = tete;
    tete = tete->suivant;
    free(temp);
}
```

## Programme à exécuter
Recherche, suppression, inversion et libération de liste.

## Compilation
```bash
cd 14_listes_chainees/ex_29_parcours_liste
make
./ex_29_parcours_liste
```

## Questions
1. Pourquoi la libération doit-elle être dans l'ordre ?
2. Quelle est la complexité de la recherche ?
3. Comment inverser une liste en-place ?