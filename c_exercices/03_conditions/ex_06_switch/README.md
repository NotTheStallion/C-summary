# Exercice 06: Switch

## Objectif
Maîtriser l'instruction switch pour les choix multiples.

## Syntaxe
```c
switch (expression) {
    case valeur1:
        // code
        break;
    case valeur2:
        // code
        break;
    default:
        // code par defaut
}
```

## Points importants
- `switch` accepte uniquement des types entiers (int, char, enum)
- `break` est obligatoire pour éviter de tomber dans le case suivant
- `default` est optionnel (exécuté si aucun case ne correspond)
- Plusieurs case peuvent se suivre sans break (cascade)

## Programme à exécuter
Trois exemples : switch simple, avec cascade, et avec default.

## Compilation
```bash
cd 03_conditions/ex_06_switch
make
./ex_06_switch
```

## Questions
1. Que se passe-t-il si on omet le `break` ?
2. Peut-on utiliser `switch` avec des chaînes de caractères ?
3. Pourquoi utiliser switch au lieu de if-else nombreux ?