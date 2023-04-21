
# TUTORIAL | MAP COLLECTIONS IN CPP

## Outils requis
* [Git](https://git-scm.com)
* Un compilateur C++ qui supporte les standards C++11 ([GNU G++](https://gcc.gnu.org/) par exemple)
* make 


## Compilation et exécution

### 1. Clonez le dépôt 
Cette commande créera un dossier `contact-list` dans votre dossier de travail :

```bash
cd path/to/working/directory
git clone https://github.com/dllagl/contact-list.git
```
### 2. Compilez le client
Ces commandes créeront un exécutable `contacts` sur un système UNIX puis l'exécutera :

```bash
cd path/to/contact-list
make && make clean
./contacts
```



## Génération documentation 

### 1. Installer doxygen

- Ubuntu :
```bash 
sudo apt install doxygen
```
- Arch Linux : 
```bash
sudo pacman -S doxygen
```
- MacOS via [Homebrew](https://brew.sh) :
```bash
brew install doxygen
```

### 2. Créer un fichier de configuration

Cette commande créera un fichier nommé `doxyfile` qui contiendra toutes les 
configurations liées à la documentation de votre code. 
```bash
cd path/to/contact-list
doxygen -g
```

### 3. Construire la documentation

Cette commande créera les dossiers `html` et `latex` qui contiendront la documentation des différents fichiers. 
```bash
cd path/to/contact-list
doxygen
```

Vous pouvez consulter le résultat en ouvrant le fichier `index.html` dans votre navigateur.