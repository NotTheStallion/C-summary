# Exercice 12: Prototypes et compilation séparée

## Objectif
Apprendre à organiser un projet C avec fichiers .h et .c séparés.

## Structure du projet
```
ex_12_prototype/
├── Makefile
├── ex_12_prototype.h    # Prototypes et declarations
└── ex_12_prototype.c    # main() et definitions
```

## Le fichier .h (header)
Contient les déclarations publiques :
- Prototypes de fonctions
- Définitions de types
- Constantes partagées

## Le fichier .c (implémentation)
Contient le code :
- Include du header
- Définitions des fonctions

## Compilation separée
```bash
gcc -c ex_12_prototype.c   # Compile sans linker
gcc -o programme ex_12.o    # Lie les objets
```

Ou simplement :
```bash
make
```

## Questions
1. Pourquoi utiliser des fichiers .h ?
2. Que se passe-t-il si on oublie include "xxx.h" ?
3. Comment éviter les inclusions multiples ?