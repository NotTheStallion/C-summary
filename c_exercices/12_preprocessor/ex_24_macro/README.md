# Exercice 24: Macros #define

## Objectif
Maîtriser les macros du préprocesseur C.

## Types de macros
- **Sans paramètre** : `#define PI 3.14`
- **Avec paramètres** : `#define CARRE(x) ((x) * (x))`
- **Opérateurs** : `##` (concat), `#` (stringification)

## Règles importantes
- TOUJOURS mettre des parenthèses autour des paramètres
- Les macros substituent du texte, pas des appels de fonction
- `__LINE__`, `__FILE__`, `__DATE__` sont des macros prédéfinies

## Programme à exécuter
Teste différentes macros et démontre les pièges.

## Compilation
```bash
cd 12_preprocessor/ex_24_macro
make
./ex_24_macro
```

## Questions
1. Pourquoi les macros sont-elles plus rapides que les fonctions ?
2. Que donne CARRE(3+2) sans parenthèses ?
3. Comment créer une macro multiligne ?