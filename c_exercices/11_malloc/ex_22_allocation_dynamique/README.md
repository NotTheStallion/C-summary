# Exercice 22: Allocation dynamique (malloc/free)

## Objectif
Maîtriser l'allocation dynamique de mémoire avec malloc et free.

## malloc
```c
int* ptr = (int*)malloc(nb_elements * sizeof(type));
```
- Retourne un pointeur ou NULL en cas d'échec
- La mémoire n'est pas initialisée

## free
```c
free(ptr);  // Libère la mémoire allouée
```
- Toujours libérer la mémoire Allouée
- Après free, le pointeur devient "dangling"

## Programme à exécuter
Alloue et libère des tableaux et matrices dynamiques.

## Compilation
```bash
cd 11_malloc/ex_22_allocation_dynamique
make
./ex_22_allocation_dynamique
```

## Questions
1. Que se passe-t-il si malloc retourne NULL ?
2. Pourquoi utiliser malloc au lieu des tableaux statiques ?
3. Peut-on appeler free deux fois sur le même pointeur ?