#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wxFIG_View.h>
#include <wxFIG_Controller.h>

mainWindow::mainWindow()  : wxFrame(NULL, wxID_ANY, "Flip It Game", wxPoint(0, 0), wxSize(700, 800)){

    this->SetBackgroundColour(*wxBLACK);
    this->SetForegroundColour(*wxWHITE);
    this->SetMinSize(wxSize(700, 600));
    
    //Container for the window
    wxColCont = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(wxColCont);
    
    //Information Label
    wxInfo = new wxStaticText(this, 700, "Click a tile to flip the tile colors in a cross shape.  Turn all tiles blue to advance to the next level.", wxPoint(5, 5));
    wxInfo->SetFont(wxFont(wxFONTSIZE_MEDIUM, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    wxColCont->Add(wxInfo, 0, wxALIGN_CENTER | wxALL , 10);

    //Container for the buttons
    wxGridCont = new wxGridSizer(25, 25, 0, 0);
    wxColCont->Add(wxGridCont, 1, wxSHAPED, 0);

    //Generate Button Grid 100px down from top of the pannel (to make room for the label)
    for (int y=0; y<25; y++){
        for (int x=0; x<25; x++){
            //Create button at location
            wxButBoard[y*25 + x] = new wxButton(this, (y*25 + x), "", wxPoint(x*25, 100+(y*25)), wxSize(25, 25));
            wxButBoard[y*25 + x]->SetBackgroundColour(*wxBLUE);
            
            //Bind listener to button
            wxButBoard[y*25 + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &gridButClicked, y*25 + x);

            //tempButCont = new wxBoxSizer(wxVERTICAL);
            //tempButCont->Add(wxButBoard[y*25 + x], 1, wxEXPAND, 0);
            wxGridCont->Add(wxButBoard[y*25 + x], 1, wxEXPAND, 0);
        }
    }    
    
    
}

mainWindow::~mainWindow(){
    //Nothing needed as wxWidgets handels deconstruction of wx objects
}

