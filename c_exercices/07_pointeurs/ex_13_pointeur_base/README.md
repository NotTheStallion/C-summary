# Exercice 13: Pointeurs - bases

## Objectif
Comprendre les pointeurs : adresses mémoire et indirection.

## Notions fondamentales
- **&** (address-of) : retourne l'adresse d'une variable
- **\*** (dereference) : accède à la valeur pointée
- Un pointeur est une variable qui contient une adresse

## Déclaration
```c
int variable = 42;
int* ptr = &variable;  // ptr contient l'adresse de variable
```

## Opérations
- `&x` : adresse de x
- `*ptr` : valeur à l'adresse contenue dans ptr
- `ptr = &y` : ptr pointe maintenant vers y

## Programme à exécuter
Affiche les adresses, modifie les valeurs via pointeurs.

## Compilation
```bash
cd 07_pointeurs/ex_13_pointeur_base
make
./ex_13_pointeur_base
```

## Questions
1. Quelle est la différence entre `*p` et `p` ?
2. Pourquoi un pointeur a-t-il un type ?
3. Que se passe-t-il si on déréférence un pointeur NULL ?