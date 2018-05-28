#ifndef APP_H
#define APP_H

#include <wx/wx.h> 

//définition de la class "Appli"
class MemoryAppli : public wxApp
{
public:
//appel au démarrage de l'application
virtual bool OnInit();
};

DECLARE_APP(MemoryAppli)
#endif //APP_H
