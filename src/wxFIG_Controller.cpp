#include <string>
#include <iostream>

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wxFIG_View.h>
#include <wxFIG_Controller.h>
#include <wxFIG_Model.h>

//Global Variables
mainWindow *window = nullptr;
level levels[100];
wxIMPLEMENT_APP(game);
int currLevel = 0;

bool game::OnInit() {
    
    window = new mainWindow();
    initLevels(levels);
    loadLevelClicks(levels[0]);
    
    window->Show(); 
    
    return true;
}


//Flip button color in a "+" shape when clicked.
void gridButClicked(wxCommandEvent &flipBtn){
    int currButID = (flipBtn.GetId());
    flipButtons(currButID);
    checkLevelComplete();

    flipBtn.Skip();
}

void flipButtons(int currButID) {

    //Center Button
    if (window->wxButBoard[currButID]->GetBackgroundColour() == *wxBLUE){
        window->wxButBoard[currButID]->SetBackgroundColour(*wxRED);
    } else {
        window->wxButBoard[currButID]->SetBackgroundColour(*wxBLUE);
    };

    //Left Button
    if (currButID % 25 != 0){
        if (window->wxButBoard[currButID-1]->GetBackgroundColour() == *wxBLUE){
        window->wxButBoard[currButID-1]->SetBackgroundColour(*wxRED);
        } else {
            window->wxButBoard[currButID-1]->SetBackgroundColour(*wxBLUE);
        };
    };
    
    //Right Button
    if (currButID % 25 != 24){
        if (window->wxButBoard[currButID+1]->GetBackgroundColour() == *wxBLUE){
            window->wxButBoard[currButID+1]->SetBackgroundColour(*wxRED);
        } else {
            window->wxButBoard[currButID+1]->SetBackgroundColour(*wxBLUE);
        };
    };

    //Top Button
    if (currButID-25 > 0){
        if (window->wxButBoard[currButID-25]->GetBackgroundColour() == *wxBLUE){
            window->wxButBoard[currButID-25]->SetBackgroundColour(*wxRED);
        } else {
            window->wxButBoard[currButID-25]->SetBackgroundColour(*wxBLUE);
        };
    };
    

    //Bottom Button
    if (currButID+25 < 625){
        if (window->wxButBoard[currButID+25]->GetBackgroundColour() == *wxBLUE){
            window->wxButBoard[currButID+25]->SetBackgroundColour(*wxRED);
        } else {
            window->wxButBoard[currButID+25]->SetBackgroundColour(*wxBLUE);
        };
    };
}

void loadLevelClicks(level currLevel){

    for (int i=0; i<currLevel.clickArrSize; i++){
        flipButtons(currLevel.clickNums[i]);
    }
}

void checkLevelComplete(){
    boolean winFlag = true;
    //string lvlLable = "";
    for (int i=0; i<(625); i++){
        if (window->wxButBoard[i]->GetBackgroundColour() == *wxRED){
            winFlag = false;
        }
    }

    if (winFlag){
        currLevel++;
        if (levels[currLevel].validLevel){
            loadLevelClicks(levels[currLevel]);
            window->wxInfo->SetLabelText("Level " + std::to_string(currLevel));
        } else {
            window->wxInfo->SetLabelText("All Levels Complete. Can you turn a single tile red? (Nothing will happen, just an extra challenge)");
        }
        
    }
}










