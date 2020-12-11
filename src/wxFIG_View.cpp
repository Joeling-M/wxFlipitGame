#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wxFIG_View.h>
#include <wxFIG_Controller.h>

mainWindow::mainWindow()  : wxFrame(NULL, wxID_ANY, "Test window", wxPoint(0, 0), wxSize(700, 800)){

    //Container for the window
    wxPan = new wxPanel(this, wxID_ANY, wxPoint(0, 0));

    //Information Label
    wxInfo = new wxStaticText(wxPan, 700, "Click a tile to flip the tile colors in a cross shape.  Turn all tiles blue to advance to the next level.", wxPoint(5, 5));
    wxInfo->SetFont(wxFont(wxFONTSIZE_MEDIUM, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));

    //Generate Button Grid 100px down from top of the pannel (to make room for the label)
    for (int y=0; y<25; y++){
        for (int x=0; x<25; x++){
            //Create button at location
            wxButBoard[y*25 + x] = new wxButton(wxPan, (y*25 + x), "", wxPoint(x*25, 100+(y*25)), wxSize(25, 25));
            wxButBoard[y*25 + x]->SetBackgroundColour(*wxBLUE);
            //Bind listener to button
            wxButBoard[y*25 + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &gridButClicked, y*25 + x);
        }
    }    
    
}

mainWindow::~mainWindow(){
    //Nothing needed as wxWidgets handels deconstruction of wx objects
}

