# _printf - Recréation de la fonction printf en C

## Table des matière
**[Description](https://github.com/loicleguen/holbertonschool-printf/blob/main/README.md#-description)**
**[Auteurs](https://github.com/loicleguen/holbertonschool-printf/blob/main/README.md#-auteurs)**
**[Fonctionnalités supportées](https://github.com/loicleguen/holbertonschool-printf/blob/main/README.md#%EF%B8%8F-fonctionnalit%C3%A9s-support%C3%A9es)**
**[Exemple d'utilisation](https://github.com/loicleguen/holbertonschool-printf/blob/main/README.md#-exemple-dutilisation)**


---

## 📚 Description

Ce projet a pour but de **reproduire la fonction `printf`** de la bibliothèque standard du langage C. Il s'agit d'un exercice permettant de comprendre en profondeur :

- Les fonctions variadiques (`stdarg.h`)
- La gestion de formatage d'une chaîne
- L'écriture sur la sortie standard (`write`)
- Le travail en binôme et l'organisation modulaire d'un projet

Projet réalisé en binôme dans le cadre du cursus Holberton.

---

## 👥 Auteurs

- **[Yanis Leroy](https://github.com/LEROY-Yanis)**  
- **[Loic Le Guen](https://github.com/loicleguen)**

---

## 🛠️ Fonctionnalités supportées

La fonction `_printf` prend en charge les spécificateurs suivants :

| Spécificateur | Description                         |
|---------------|-------------------------------------|
| `%c`          | Affiche un **caractère**            |
| `%s`          | Affiche une **chaîne de caractères**|
| `%%`          | Affiche le caractère `%`            |
| `%d`, `%i`    | Affiche un **entier signé**         |

Les comportements non spécifiés (comme `%r`) sont imprimés tels quels, comme le fait `printf`.

---

## 🧪 Exemple d'utilisation

```c
#include "main.h"

int main(void)
{
    int count;

    count = _printf("Bonjour %s ! Le chiffre est %d\n", "le monde", 42);
    _printf("Nombre de caractères affichés : %d\n", count);
    return (0);
}
```
---

## Flowchart

<img src= "https://github.com/loicleguen/holbertonschool-printf/blob/main/Flowchartprintf.drawio.png">

---