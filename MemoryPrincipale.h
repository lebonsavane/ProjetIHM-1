#ifndef PRINCIPALE_H
#define PRINCIPALE_H

#include <wx/wx.h>
#include <wx/sizer.h>
#include <wx/bmpbuttn.h>
#include <wx/frame.h>


class MemoryPrincipale : public wxFrame
{
  public : 
  //constructeur
    MemoryPrincipale(const wxString&);
    
    
  //destructeur
    virtual ~MemoryPrincipale();
    
  //timer
    void OnTimer(wxTimerEvent& event); 

  private:
    
  //timer
    wxTimer m_timer;
    
  //sizers
    wxSizer *sizerMain;
    wxSizer *sizerBottom;
    wxSizer *sizerScore;
    wxSizer *sizerButton;
  

  //button
     wxButton *btnDA;
    
  //textes
    wxStaticText *tempsM;
    wxStaticText *tempsR;
    wxStaticText *coups;
    wxStaticText *paires;
    wxStaticText *lblTempsM;
    wxStaticText *lblTempsR;
    wxStaticText *lblCoups;
    wxStaticText *lblPaires;

  //Table d'évenements
    DECLARE_EVENT_TABLE()

}
#endif //PRINCIPALE_H
