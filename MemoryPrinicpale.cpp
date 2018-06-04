#include "Memory.h"
#include "MemoryPrincipale.h"

BEGIN_EVENT_TABLE (MemoryPrincipale, wxFrame)

END_EVENT_TABLE ()


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