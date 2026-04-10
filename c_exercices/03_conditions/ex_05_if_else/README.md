# Exercice 05: Conditions if-else

## Objectif
Maîtriser les structures conditionnelles if, else if, else.

## Syntaxe
```c
if (condition) {
    // code si vrai
} else if (autre_condition) {
    // autre cas
} else {
    // code par defaut
}
```

## Règles importantes
- Les accolades ne sont pas nécessaires pour une seule instruction
- La condition doit être une expression entière (0 = faux, non-zero = vrai)
- else if est simplement else { if ... }

## Programme à exécuter
Démontre différents cas d'utilisation des conditions.

## Compilation
```bash
cd 03_conditions/ex_05_if_else
make
./ex_05_if_else
```

## Questions
1. Que se passe-t-il si on oublie les accolades ?
2. Peut-on mettre une assignation `=` au lieu de `==` dans un if ?
3. Que retourne une condition avec un opérateur de comparaison ?