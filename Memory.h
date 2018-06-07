
#ifndef Memory_h
#define Memory_h

#include "Plateau.h"
#include "bool.h"
#include "etatJeu.h"
#include "int.h"

class Carte;

class Memory{

 public:
    virtual void actualisation();

    virtual int getTempsMax();

    virtual int getTempsRestant();

    virtual void setEtat(etatJeu UnEtatMemory);

    virtual void setTempsMax(int temps);

    virtual void setTempsRestant(int temps);

    virtual etatJeu getEtatJeu();

    virtual Plateau getLePlateau();

    virtual int getNbCarteUtilisee();

    virtual bool evaluerCartes();

    virtual void demarrerPartie();

    virtual void abandonnerPartie();

    virtual void terminerPartiePlusDeTemps();

    virtual void terminerPartiePlusDeCarte();

    virtual void setNbCarteUtilisee();

    virtual void setPaireTrouvee(int paireTrouvee);

    virtual void getPaireTrouvee();

    virtual void setCoups(int coups);

    virtual void getCoups();


 protected:
    etatJeu etatJeu;
    int tempsMax;
    /* {deprecated=false}*/
    int tempsRestant;
    int nbCarteARassembler;
    int nbCarteUtilisee;
    int nbPaireTrouvee;
    int nbCoups;

};

#endif // Memory_h
