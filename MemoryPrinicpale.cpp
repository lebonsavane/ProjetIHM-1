#include "Memory.h"
#include "MemoryPrincipale.h"

BEGIN_EVENT_TABLE (MemoryPrincipale, wxFrame)
  wxEVT_BUTTON(/*id*/,MemoryPrincipale::/*méthode commencer*/)
  wxEVT_BUTTON(/*id*/,MemoryPrincipale::/*méthode abandonner*/)
END_EVENT_TABLE ()

MemoryPrincipale::MemoryPrincipale(const wxString title) : wxFrame(NULL, wxID_ANY, title)
{
  //text
  tempsM = new wxStaticText(this, wxID_ANY, wxT("Temps mis :"));
  TempsR = new wxStaticText(this, wxID_ANY, wxT("Temps restant :"));
  coups = new wxStaticText(this, wxID_ANY, wxT("Coups joués :"));
  paires = new wxStaticText(this, wxID_ANY, wxT("paires trouvés :"));
  
  
  //sizers
  SizerButton = new wxBoxSizer(wxHORIZONTAL);
  SizerScore = new wxBoxSizer(wxHORIZONTAL);
  SizerBottom = new wxBoxSizer(wxHORIZONTAL);
  SizerMain = new wxBoxSizer(wxVERTICAL);

  SizerButton -> Add (BtnD&A, 0, wxALIGN_RIGHT, 5);
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
