# Exercice 14: Pointeurs et tableaux

## Objectif
Comprendre la relation entre pointeurs et tableaux.

## Equivalence
En C, `tableau` est équivalent à un pointeur sur le premier élément.
- `tab` == `&tab[0]`
- `tab[i]` == `*(tab + i)`

## Arithmétique des pointeurs
- `ptr + 1` : avance de sizeof(type) octets
- `ptr++` : pointe sur l'élément suivant
- `ptr - ptr` : distance entre deux pointeurs

## Différence clé
- `sizeof(tab)` : taille totale du tableau
- `sizeof(ptr)` : taille d'un pointeur (8 octets sur 64-bit)

## Programme à exécuter
Parcourt des tableaux avec des pointeurs, démontre l'arithmétique.

## Compilation
```bash
cd 07_pointeurs/ex_14_pointeur_tableau
make
./ex_14_pointeur_tableau
```

## Questions
1. Pourquoi `tab` et `&tab[0]` sont-ils équivalents ?
2. Que donne `ptr - 1` si ptr pointe sur le premier élément ?
3. Peut-on soustraire deux pointeurs de tableaux différents ?