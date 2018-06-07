#include "Memory.h"
#include "MemoryPrincipale.h"
#include "MemoryApp.h"
#include "ConstantesCommunes.h"

BEGIN_EVENT_TABLE (MemoryPrincipale, wxFrame)
  wxEVT_CLOSE(          ,MemoryPrincipale::OnClose)
  wxEVT_BUTTON(wxID_ANY,MemoryPrincipale::OnBegin)
  wxEVT_BUTTON(wxID_ANY,MemoryPrincipale::OnGiveUp)
  wxEVT_TIMER(TIMER_ID,MemoryPrincipale::OnTimer)
END_EVENT_TABLE ()

MemoryPrincipale::MemoryPrincipale(const wxString title) 
  : wxFrame(NULL, wxID_ANY, title),
    m_timer(this,TIMER_ID)
{
      
  //timer
    m_timer.Start(1000);    // 1 seconde d'intervalle
      
  //text
  lblTempsM = new wxStaticText(this, wxID_ANY, wxT("Temps mis :"));
  lblTempsR = new wxStaticText(this, wxID_ANY, wxT("Temps restant :"));
  lblCoups = new wxStaticText(this, wxID_ANY, wxT("Coups joués :"));
  lblPaires = new wxStaticText(this, wxID_ANY, wxT("paires trouvés :"));
  
  
  //sizers
  SizerButton = new wxBoxSizer(wxHORIZONTAL);
  SizerScore = new wxBoxSizer(wxHORIZONTAL);
  SizerBottom = new wxBoxSizer(wxHORIZONTAL);
  SizerMain = new wxBoxSizer(wxVERTICAL);
  sizerGrillePlateau = new wxGridSizer(4, 4);

  SizerButton -> Add (btnDA, 0, wxALIGN_RIGHT, 5);
  SizerScore -> Add (lblTempsR, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (tempsR,1,wxALIGN_LEFT,5);
  SizerScore -> Add (lblPaires, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (paires, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (lblCoups, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (coups, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (lblTempsR, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (tempsR, 1, wxALIGN_LEFT, 5);
      
      
   //boutons grilles
     
       wxString bouton1;
       ID_BITMAPBUTTON1 = wxNewId();

            // création du bouton, l'image initiale utilisée est celle du dos de la carte représentée
            bouton1 = wxT("");
            bouton1 << ID_BITMAPBUTTON1;  // détermination du nom du bouton

            boutonACliquer1 = new wxBitmapButton(
                                            this,
                                            ID_BITMAPBUTTON1,
                                            wxBitmap(image.Scale(80,80)),  // possibilité de définir la taille de l'image dans le bouton
                                            wxDefaultPosition,
                                            wxDefaultSize,
                                            wxBU_AUTODRAW,
                                            wxDefaultValidator,
                                            bouton1);

            // ajout du bouton dans son sizer
            sizerGrillePlateau->Add(boutonACliquer1,
                                    1,
                                    wxALL | wxEXPAND,
                                    5);
      
              
      
             wxString bouton2;
             ID_BITMAPBUTTON2 = wxNewId();

            // création du bouton, l'image initiale utilisée est celle du dos de la carte représentée
            bouton2 = wxT("");
            bouton2 << ID_BITMAPBUTTON2;  // détermination du nom du bouton

            boutonACliquer2 = new wxBitmapButton(
                                            this,
                                            ID_BITMAPBUTTON2,
                                            wxBitmap(image.Scale(80,80)),  // possibilité de définir la taille de l'image dans le bouton
                                            wxDefaultPosition,
                                            wxDefaultSize,
                                            wxBU_AUTODRAW,
                                            wxDefaultValidator,
                                            bouton2);

            // ajout du bouton dans son sizer
            sizerGrillePlateau->Add(boutonACliquer2,
                                    1,
                                    wxALL | wxEXPAND,
                                    5);
  
  
}

MemoryPrincipale::~MemoryPrincipale()
{
  //dtor
}

void MemoryPrincipale::OnClose(event)
{
}

void MemoryPrincipale::OnBegin(event)
{
}

void MemoryPrincipale::OnGiveUp(event)
{
}

void MemoryPrincipale::OnTimer(event)
{
 void MemoryPrincipale::OnTimer(event)
{
  int i = TEMPS_MAX_ALLOUE;
  while( i >= 0){
    tempsR -> SetLabel(i);
  }
}
