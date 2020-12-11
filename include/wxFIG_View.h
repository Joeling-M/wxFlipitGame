#ifndef wxFIG_VIEW_H
    #define wxFIG_VIEW_H

    #include <wx/wxprec.h>

    #ifndef WX_PRECOMP
        #include <wx/wx.h>
    #endif

    class mainWindow : public wxFrame 
    {
        public:
            mainWindow();
            ~mainWindow();

        
        public: 
            //Container object
            wxPanel *wxPan = nullptr;
            //Array of buttons for the grid
            wxButton *wxButBoard[25*25];
            //Label for instructions
            wxStaticText *wxInfo = nullptr;
    };

#endif