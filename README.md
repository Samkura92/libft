# *This activity has been created as part of the 42 curriculum by saoussai*

---

## Description
**Libft** est le premier projet de 42. Le but de ce projet est de recreer sa propre bibliotheque en C, qui contient plusieurs fonctions basique qui seront utiliser tout le long du cursus.

### Contenue du Libft
- **Libc fonctions**: les fonction stantard en C (`ft_strlen`, `ft_atoi`, `ft_memcpy`, etc.)
- **Fonctions en plus**: ces des fonctions qui ne sont pas dans la libc mais qui pourront etre utiliser pour d'autre projet (`ft_substr`, `ft_strjoin`, `ft_itoa`, etc.)
- **Fonctions lst**: des fonctions qui geres les listes chaines (`ft_lestnew`, `ft_lstdelone`, `ft_lstmap`, etc.) 

---

## Instruction

### Compilation
```bash
make		# cree le fichier libft.a
make clean  # supprime les fichiers .o
make fclean # supprime les .o + libft.a
make re		# recompile tout depuis zero
```

### Utilisation

Inclure le headers dans ton fichiers .c:

```c
#include "libft.h"
```

Puis tu compile avec la librairie:

```bash
gcc ton_fichier.c -L. -lft -o ton_programme
```

---

## Details de la Libft

### Partie 1 : Libc fonctions

| Fonction | Description |
|----------|-------------|
| `ft_isalpha` | Verifie si le caractere est un alphabet |
| `ft_isdigit` | Verifie si le caractere est un digit |
| `ft_isalnum` | Verifie si le caractere est un alphanumeric |
| `ft_isascii` | Verifie si le caractere est un ASCII |
| `ft_isprint` | Verifie si le caractere est printable |
| `ft_strlen` | Compte le nombre de caractere dans la string |
| `ft_memset` | Remplis la memoire par la valeur demander |
| `ft_bzero` | Remplis la memoire par des zeros |
| `ft_memcpy` | Copie la memoire |
| `ft_memmove` | Copie la memoire en gerant les chevaugements |
| `ft_strlcpy` | Copie la dans une chaine de caractere |
| `ft_strlcat` | Concatene dans une chaine de caractere |
| `ft_toupper` | Convertie un caractere en majuscule |
| `ft_tolower` | Convertie un caractere en minuscule |
| `ft_strchr` | Cherche dans une string la premiere occurence |
| `ft_strrchr` | Cherche dans une string la derniere occurence |
| `ft_strncmp` | Compare deux chaine de caractere |
| `ft_memchr` | Cherche quelque chose dans un block de memoire |
| `ft_memcmp` | Compare dans un block de memoire |
| `ft_strnstr` | Cherche need dans hay |
| `ft_atoi` | Convertie une chaine en entier |
| `ft_calloc` | Alloue de la memoire et met tout a 0 |
| `ft_strdup` | Duplique une nouvelle chaine |

### Partie 2 : Fonctions en plus

| Fonction | Description |
|----------|-------------|
| `ft_substr` | Extrait une chaine de caractere en fonction |
| `ft_strjoin` | Concatene deux chaine de caractere |
| `ft_strtrim` | Supprime au debut et a la fin de la chaine de caractere |
| `ft_split` | Divise la chaine en different tableau |
| `ft_itoa` | Convertie un entier en chaine de caractere |
| `ft_strmapi` | Applique une fonction a une chaine de caractere |
| `ft_striteri` | Applique une fonction a un caractere |
| `ft_putchar_fd` | Ecrit un caractere selon la sortie |
| `ft_putstr_fd` | Ecrit une chaine de caractere selon la sortie  |
| `ft_putendl_fd` | Ecrit une chaine de caractere avec retour a la ligne selon la sortie |
| `ft_putnbr_fd` | Ecrit un entier selon la sortie|

### Partie 3 : Fonctions lst

| Fonction | Description |
|----------|-------------|
| `ft_lstnew` | Creation d'un nouveau noeud |
| `ft_lstadd_front` | Ajoute un noeud au debut de la liste |
| `ft_lstsize` | Compte le nombre de noeud dans la liste |
| `ft_lstlast` | Retourn le dernier noeud de la liste |
| `ft_lstadd_back` | Ajoute un noeud a la fin de la liste |
| `ft_lstdelone` | Supprime un noeud |
| `ft_lstclear` | Supprime et libere la liste en entier |
| `ft_lstiter` | Applique une fonction a tout les noeuds de la liste |
| `ft_lstmap` | Creation d'une nouvelle liste en appliquant la fonction a chaque noeud |

---

## Ressources

### Ressources d'apprentissage
- **Amis et etudiant** : explication des fonctions, aide a debug.
- **KooR** : site qui regroupe les fonctions standard en C traduite en francais.
- **Man Pages** : manuel offciel des fonctions standard du C.
- **Python Tutor** : comprendre pourquoi mon code ne fonctionne pas et voir quel moment sa bloque.
- **Openclasrooms** : cours sur les fondamentals du C.
- **Youtube** : video expliquant comment marche certaines fonction.

### Utilisation de l'IA
J'ai utiliser uniquement (Claude by Anthropic) pour :
- Mieux comprendre le fonctionnement des fonctions avec des exmples pour ilustrer.
- Clarifier des thermes specifiques sur pourquoi utiliser ceci et pas cela, et mieux comprendre leur utilite.
> IA ma aider a comprendre et apprendre mais je ne l'ai jamais utiliser pour gener directement un code.