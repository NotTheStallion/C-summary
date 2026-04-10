# Exercice 25: Include guards

## Objectif
Prévenir les inclusions multiples avec les guards.

## Problème sans guard
Si fichier A.h et B.h incluent tous deux C.h, et main.c inclut A.h et B.h:
- C.h serait inclus deux fois
- Erreurs de redéfinition

## Solution: Include guard
```c
#ifndef NOM_FICHIER_H
#define NOM_FICHIER_H

// contenu du header

#endif
```

## Alternative moderne
```c
#pragma once
```
(plus simple, mais non standard C)

## Programme à exécuter
Démontre le fonctionnement du guard.

## Compilation
```bash
cd 12_preprocessor/ex_25_include_guard
make
./ex_25_include_guard
```

## Questions
1. Que se passe-t-il sans guard ?
2. Pourquoi #ifndef et pas #ifdef ?
3. #pragma once est-il portable ?