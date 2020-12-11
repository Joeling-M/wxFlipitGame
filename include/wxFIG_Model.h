#ifndef wxFIG_MODEL_H
    #define wxFIG_MODEL_H

    #include <wx/wxprec.h>

    #ifndef WX_PRECOMP
        #include <wx/wx.h>
    #endif
    

    //Object to hold level data
    class level {
        
        public: 
            //Id numbers of buttons to be clicked to load a level.
            int clickNums[100];
            int clickArrSize;
            //To check if the level has data, or is empty
            boolean validLevel = false;
    };

    //Add data to each level object in the array
    void initLevels(level levels[100]);

    //Load level by clicking in specified spots
    void loadLevelClicks(level currLevel);
    
#endif