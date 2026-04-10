# Exercice 28: Listes chaînées - insertion

## Objectif
Comprendre et implémenter les listes chaînées simples.

## Structure d'un nœud
```c
typedef struct Noeud {
    int valeur;
    struct Noeud* suivant;
} Noeud;
```

## Opérations
- **créer_noeud** : alloue et initialise un nouveau nœud
- **inserer_debut** : ajoute au début (nouveau pointé par tête)
- **inserer_fin** : parcourt jusqu'au dernier et ajoute

## Caractéristiques
- Accès séquentiel (pas d'indexation directe)
- Insertion O(1) au début, O(n) à la fin
- Pas de limite de taille (sauf mémoire)

## Programme à exécuter
Crée et manipule une liste chaînée.

## Compilation
```bash
cd 14_listes_chainees/ex_28_liste_chainee
make
./ex_28_liste_chainee
```

## Questions
1. Pourquoi utiliser des listes chaînées plutôt que des tableaux ?
2. Que se passe-t-il si on perd le pointeur de tête ?
3. Comment insérer au milieu d'une liste ?