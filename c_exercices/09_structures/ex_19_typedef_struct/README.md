# Exercice 19: Typedef et structures

## Objectif
Maîtriser le mot-clé typedef pour créer des alias de types.

## Syntaxe typedef
```c
typedef type_original alias;
typedef struct { ... } TypeAlias;
```

## Avantages du typedef
- Syntaxe plus courte (pas de "struct" devant)
- Meilleure lisibilité
- Portabilité plus facile

## Exemple
```c
typedef struct {
    int x, y;
} Point;

Point p1 = {10, 20};
```

## Programme à exécuter
Utilise typedef pour créer des types personnalisés.

## Compilation
```bash
cd 09_structures/ex_19_typedef_struct
make
./ex_19_typedef_struct
```

## Questions
1. Quelle est la différence entre struct et typedef ?
2. Peut-on utiliser typedef avec des pointeurs ?
3. Pourquoi typedef est-il souvent utilisé en C ?