#ifndef PRINCIPALE_H
#define PRINCIPALE_H

#include <wx/wx.h>

class MemoryPrincipale : public wxFrame
{
  public : 
  //constructeur
    MemoryPrincipale(const wxString&);
    
    
  //destructeur
    virtual ~MemoryPrincipale();

   //sizers
    wxSizer *sizerMain;
    wxSizer *sizerBottom;
    wxSizer *sizerScore;
    wxSizer *sizerButton;
/** rajouter sizer grind pour les cartes **/

    //button
     wxButton *btnD&A;
   
   //textes
    wxStaticText *tempsM;
    wxStaticText *tempsR;
    wxStaticText *coups;
    wxStaticText *paires;
    wxStaticText *lblTempsM;
    wxStaticText *lblTempsR;
    wxStaticText *lblCoups;
    wxStaticText *lblPaires;
}

   //Table d'évenements
    DECLARE_EVENT_TABLE()

#endif //PRINCIPALE_H
