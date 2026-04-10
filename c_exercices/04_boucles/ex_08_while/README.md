# Exercice 08: Boucles while et do-while

## Objectif
Maîtriser les boucles conditionnelles while et do-while.

## Syntaxe while
```c
while (condition) {
    // code repete tant que condition vraie
}
```

## Syntaxe do-while
```c
do {
    // code execute au moins une fois
} while (condition);
```

## Différence clé
- **while** : teste la condition AVANT (peut ne jamais s'exécuter)
- **do-while** : teste la condition APRÈS (s'exécute toujours au moins une fois)

## Programme à exécuter
Démontre les deux types de boucles avec des exemples.

## Compilation
```bash
cd 04_boucles/ex_08_while
make
./ex_08_while
```

## Questions
1. Quand utiliser while au lieu de for ?
2. Pourquoi do-while est-il utile pour les menus ?
3. Que se passe-t-il si la condition est toujours vraie ?