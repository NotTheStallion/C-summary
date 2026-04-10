# Exercice 31: Bibliothèque statique avec Makefile

## Objectif
Créer une bibliothèque statique et l'utiliser dans un projet.

## Étapes
1. Compiler les fichiers source en fichiers objet (.o)
2. Archiver les fichiers objet en bibliothèque (.a)
3. Lier la bibliothèque avec le programme principal

## Commandes
```bash
# 1. Compiler les objets
gcc -c bibliotheque.c -o bibliotheque.o

# 2. Créer la bibliothèque
ar rcs libbibliotheque.a bibliotheque.o

# 3. Compiler avec la bibliothèque
gcc main.c -L. -lbibliotheque -o programme

# 4. Exécuter
./programme
```

## Structure du projet
```
ex_31_bibliotheque/
├── Makefile
├── main.c
├── bibliotheque.h
├── bibliotheque.c
└── libbibliotheque.a    (généré)
```

## Makefile avec cibles multiples
- `make all` : compile tout
- `make lib` : crée la bibliothèque
- `make clean` : nettoie les fichiers

## Questions
1. Pourquoi utiliser une bibliothèque ?
2. Quelle est la différence entre bibliothèque statique et dynamique ?
3. À quoi sert l'option -L ?