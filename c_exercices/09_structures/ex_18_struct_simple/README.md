# Exercice 18: Structures simples

## Objectif
Comprendre et utiliser les structures en C.

## Définition d'une structure
```c
struct NomStructure {
    type1 champ1;
    type2 champ2;
    // ...
};
```

## Déclaration
```c
struct Etudiant e1;
struct Etudiant e2 = {"nom", 20, 15.5};
```

## Accès aux champs
- **Opérateur point** : `e1.age`
- Avec pointeur : `ptr->age`

## Programme à exécuter
Crée, modifie et parcourt des structures.

## Compilation
```bash
cd 09_structures/ex_18_struct_simple
make
./ex_18_struct_simple
```

## Questions
1. Quelle est la différence entre struct et classe ?
2. Peut-on passer une structure à une fonction ?
3. Comment comparer deux structures ?