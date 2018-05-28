#ifndef CASE_H
#define CASE_H

#include <string>
#include <iostream>
#include "carte.h"
#include <wx/msgdlg.h> // pour les wxMessageBx()

using namespace std;

/**  ==================  CASE.H  ==============
     -------------------------------------------
    Les fichiers images représentant les figures des cartes sont nommés de la manière suivante :
    nomCollection_0.type,
    nomCollection_1.type,
    nomCollection_2.type, .....,
    et l'image contenant le dos de la carte se nomme nomCollection_0.type
Exple : Disney_1.gif, Disney_2.gif, .... Disney_53.gif, et Disney_0.gif.
Ici :
- nomCollection. Exemple "Disney"
- nomFace = nom du fichier image contenant le côté face de la carte. Exemple "Disney_14.gif"
  calculé par concaténation d'attrbuts :
  Carte::setNomFace(nomCol + "_i." + Carte::getTypeImage()) ;
  où i est un nombre compris entre 1 et nbrImages
  - typeImage = Extention. Exemple "gif"
- nomDos = nom du fichier image représentant le dos de chaque carte de la collection.
  calculé par concaténation d'éléments décrits précédemment :
  Carte::setNomDos(nomCol + "_0." + Carte::getTypeImage()) ;
  Exemple : "Disney_0.gif"
- nbrImages = NB  (NB-1 images pour les cartes et 1 image pour le dos)
Pour la Collection Disney, nbreCartes = 54 (1 image pour dos et 53 pour les faces).

Lien avec les constantes du programme (fichier constantesCommmunes.h :
----------------------------------------------------------------------
L'attribut nbrImages doit être < NB_MAX_IMAGES_COLLECTION
*/


class Case {

public:
    enum UnEtatCase{libre=0, occupee};
    Case();                 //ctor
    virtual ~Case();        //dtor
    UnEtatCase getEtatCase();
    Carte* getElementCase();
    void setElementCase(Carte*);
    void setEtatCase(UnEtatCase);

private:
    UnEtatCase etatCase;
    Carte* elementCase;

};

#endif //CASE_H
