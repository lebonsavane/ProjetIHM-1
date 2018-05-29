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
    wxTextcontrol *tempsM;
}

#endif //PRINCIPALE_H
