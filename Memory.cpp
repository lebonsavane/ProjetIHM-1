#include "Memory.h"
/*
void Memory::actualisation()
{
while(getEtatJeu()==Demarrer)
{
   while(
{
    //timer
    for(int i=300;i > 0;i--)
{
    Sleep(1000);
    tempsRestant = i;
}
} 
} 
}*/
      
int Memory::getTempsMax()
int Memory::tempsRestant()
   
virtual void Memory::setEtat(etatJeu UnEtatMemory)
{
   
}

virtual void Memory::setTempsMax(int tempsMax)
{

}

virtual void Memory::setTempsRestant(int tempsRestant)
{

}

virtual etatJeu Memory::getEtatJeu()
{
 return etatJeu;  
}

virtual Plateau Memory::etLePlateau()
{
 return 
}

virtual int Memory::getNbCarteUtilisee()
{
   return nbCarteUtilisee;
}

virtual bool Memory::evaluerCartes()
{
   return false;
}

virtual void Memory::demarrerPartie()
{
  
}

virtual void Memory::abandonnerPartie()
{

}

virtual void Memory::terminerPartiePlusDeTemps()
{

}

virtual void Memory::terminerPartiePlusDeCarte()
{

}

virtual void Memory::setNbCarteUtilisee()
{

}

virtual void Memory::setPaireTrouvee(int nbPaireTrouvee)
{

}

virtual void Memory::getPaireTrouvee()
{

}

virtual void Memory::setCoups(int nbCoups)
{

}

virtual void Memory::getCoups()
{

}
