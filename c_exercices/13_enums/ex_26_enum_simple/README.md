# Exercice 26: Énumérations simples

## Objectif
Maîtriser les énumérations en C.

## Syntaxe
```c
enum NomEnum { VALEUR1, VALEUR2, VALEUR3 };
enum NomEnum variable = VALEUR1;
```

## Caractéristiques
- Les valeurs sont des entiers (par défaut 0, 1, 2...)
- On peut assigner des valeurs spécifiques
- Utile pour les constantes liées entre elles

## Programme à exécuter
Crée et utilise des énumérations pour les jours, couleurs, niveaux.

## Compilation
```bash
cd 13_enums/ex_26_enum_simple
make
./ex_26_enum_simple
```

## Questions
1. Quel est le type sous-jacent d'une énumération ?
2. Peut-on assigner n'importe quel entier à une variable enum ?
3. Pourquoi utiliser enum au lieu de #define ?