# Exercice 30: Compilation multi-fichiers avec Makefile

## Objectif
Apprendre à compiler un projet C avec plusieurs fichiers source.

## Structure du projet
```
ex_30_multi_fichiers/
├── Makefile
├── main.c           # Contient main()
├── calculatrice.h   # Header
└── calculatrice.c   # Implémentation
```

## Commandes de compilation
```bash
# Compilation séparée
gcc -c calculatrice.c   # -> calculatrice.o
gcc -c main.c           # -> main.o
gcc -o programme main.o calculatrice.o

# Avec make
make
```

## Makefile minimal
```make
CC = gcc
CFLAGS = -Wall -g

programme: main.o calculatrice.o
    $(CC) -o $@ $^

%.o: %.c calculatrice.h
    $(CC) -c $<

clean:
    rm -f *.o programme
```

## Programme à exécuter
Compile et exécute une calculatrice en plusieurs fichiers.

## Questions
1. Pourquoi compiler séparément ?
2. Que fait l'option -c ?
3. À quoi sert $< dans le Makefile ?