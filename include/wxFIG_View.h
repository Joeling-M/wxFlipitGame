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
            //Objects within the window
            //Containers
            wxPanel *wxPan = nullptr;
            wxBoxSizer *wxColCont = nullptr;
            wxGridSizer *wxGridCont = nullptr;

            wxButton *wxButBoard[25*25];
            wxStaticText *wxInfo = nullptr;
    };

#endif