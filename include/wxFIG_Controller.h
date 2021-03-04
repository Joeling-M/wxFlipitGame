#ifndef wxFIG_CONTROLLER_H
    #define wxFIG_CONTROLLER_H

    #include <wx/wxprec.h>

    #ifndef WX_PRECOMP
        #include <wx/wx.h>
    #endif

    //Event hadeler for a button being clicked
    void gridButClicked(wxCommandEvent &flipBtn);
    //Flip the button of the passed ID and its adjacent buttons
    void flipButtons(int currButID);
    //Check for a win and load next level if so
    void checkLevelComplete();

    //Basic wxWidget app class for the game.
    class game : public wxApp
    {
        public:
            virtual bool OnInit();
    };
    
    

#endif