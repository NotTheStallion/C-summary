# Exercice 03: Opérateurs arithmétiques

## Objectif
Maîtriser les opérateurs arithmétiques du C.

## Notions à retenir
- **+ - *** : addition, soustraction, multiplication
- **/** : division entière vs réelle (dépend du type des opérandes)
- **%** : modulo (reste de la division entière)
- **++ --** : incrémentation/décrémentation (pré ou post)

## Points importants
- En C, `17 / 3` donne `5` (division entière)
- Pour avoir un résultat réel : `17.0 / 3.0` ou cast
- `a++` retourne la valeur AVANT incrémentation
- `++a` retourne la valeur APRÈS incrémentation

## Programme à exécuter
Chaque fonction démontre un opérateur arithmétique.

## Compilation
```bash
cd 02_operateurs/ex_03_arithmetique
make
./ex_03_arithmetique
```

## Questions
1. Que donne `10 / 3` en C ? Et `10.0 / 3.0` ?
2. Quelle est la différence entre `a++` et `++a` ?
3. Peut-on utiliser `%` avec des nombres à virgule ?