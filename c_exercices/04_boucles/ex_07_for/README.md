# Exercice 07: Boucle for

## Objectif
Maîtriser la boucle for en C.

## Syntaxe
```c
for (initialisation; condition; increment) {
    // code a repeter
}
```

## Composants
1. **Initialisation** : exécuté une fois au début (ex: `int i = 0`)
2. **Condition** : testée avant chaque itération (ex: `i < n`)
3. **Incrément** : exécuté après chaque itération (ex: `i++`)

## Cas d'usage courants
- Parcours de tableaux
- Calculs itératifs (somme, produit)
- Comptage

## Programme à exécuter
Calcule des sommes, tables de multiplication, factorielles.

## Compilation
```bash
cd 04_boucles/ex_07_for
make
./ex_07_for
```

## Questions
1. Que se passe-t-il si la condition est toujours vraie ?
2. Peut-on avoir plusieurs variables dans le for ?
3. Quelle est la différence entre `i++` et `++i` dans un for ?