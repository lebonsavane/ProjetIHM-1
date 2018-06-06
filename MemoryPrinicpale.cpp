#include "Memory.h"
#include "MemoryPrincipale.h"

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

  SizerButton -> Add (btnDA, 0, wxALIGN_RIGHT, 5);
  SizerScore -> Add (lblTempsR, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (tempsR,1,wxALIGN_LEFT,5);
  SizerScore -> Add (lblPaires, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (paires, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (lblCoups, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (coups, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (lblTempsR, 1, wxALIGN_LEFT, 5);
  SizerScore -> Add (tempsR, 1, wxALIGN_LEFT, 5);
  
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
  int i = TEMPS_MAX_ALLOUE;
  while((int) tempsR > 0){
    tempsR = tempsR << i;
    i++;
  }
}
