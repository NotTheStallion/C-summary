# Exercice 17: Manipulation de chaînes

## Objectif
Maîtriser les fonctions de manipulation de chaînes de `<string.h>`.

## Fonctions essentielles
- **strcpy(dest, src)** : copie src dans dest
- **strcat(dest, src)** : ajoute src à la fin de dest
- **strcmp(s1, s2)** : compare deux chaînes (0 si égal, <0 ou >0 sinon)
- **strlen(s)** : longueur sans le \0
- **sprintf(buffer, format, ...)** : formatage comme printf dans une chaîne
- **strstr(haystack, needle)** : trouve une sous-chaîne

## Notes importantes
- Toujours vérifier la taille du buffer destination
- strncpy/strncat sont plus sûres pour éviter les débordements
- strcmp est sensible à la casse

## Programme à exécuter
Démontre toutes les fonctions de manipulation.

## Compilation
```bash
cd 08_chaines/ex_17_manipulation
make
./ex_17_manipulation
```

## Questions
1. Que se passe-t-il si dest est trop petit dans strcpy ?
2. Quelle est la différence entre strcmp et strncmp ?
3. Comment parcourir une chaîne caractère par caractère ?