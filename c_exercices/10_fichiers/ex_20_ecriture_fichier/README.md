# Exercice 20: Écriture dans un fichier

## Objectif
Apprendre à écrire dans des fichiers avec fopen, fprintf, fclose.

## Ouverture de fichier
```c
FILE* fp = fopen("nom.txt", "w");
```
- **"w"** : écrit (écrase si existant)
- **"a"** : ajoute (créer si inexistant)

## Écriture
```c
fprintf(fp, "texte %d", valeur);
fputs("chaine\n", fp);
fputc('A', fp);
```

## Fermeture
```c
fclose(fp);
```

## Programme à exécuter
Crée plusieurs fichiers avec différents contenus.

## Compilation
```bash
cd 10_fichiers/ex_20_ecriture_fichier
make
./ex_20_ecriture_fichier
```

## Questions
1. Quelle est la différence entre "w" et "a" ?
2. Que se passe-t-il si le fichier existe déjà avec "w" ?
3. Comment écrire dans un fichier binaire ?