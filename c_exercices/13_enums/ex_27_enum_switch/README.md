# Exercice 27: Énumérations avec switch

## Objectif
Utiliser les énumérations avec switch pour des menus et états.

## Pattern courant
```c
enum Type { A, B, C };

switch(variable) {
    case A: ...; break;
    case B: ...; break;
    case C: ...; break;
}
```

## Utilisation typique
- Menus interactifs
- Automates d'états
- Jeux (pierré-feuille-ciseaux)

## Programme à exécuter
Jeu pierre-feuille-ciseaux utilisant enum et switch.

## Compilation
```bash
cd 13_enums/ex_27_enum_switch
make
./ex_27_enum_switch
```

## Questions
1. Pourquoi switch est-il parfait avec les énumérations ?
2. Est-il nécessaire de traiter tous les cas d'un enum ?
3. Comment ajouter un cas "inconnu" à un enum ?