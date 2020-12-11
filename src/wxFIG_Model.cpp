#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include <wxFIG_Controller.h>
#include <wxFIG_Model.h>
#include <wxFIG_View.h>


//Add data for each level.
void initLevels(level levels[100]){
    

    levels[0].validLevel = true;
    levels[0].clickArrSize = 1;

    levels[0].clickNums[0] = 85;


    levels[1].validLevel = true;
    levels[1].clickArrSize = 2;

    levels[1].clickNums[0] = 85;
    levels[1].clickNums[1] = 86;


    levels[2].validLevel = true;
    levels[2].clickArrSize = 2;

    levels[2].clickNums[0] = 85;
    levels[2].clickNums[1] = 61;


    levels[3].validLevel = true;
    levels[3].clickArrSize = 4;

    levels[3].clickNums[0] = 85;
    levels[3].clickNums[1] = 61;
    levels[3].clickNums[2] = 111;
    levels[3].clickNums[3] = 87;
    

    levels[4].validLevel = true;
    levels[4].clickArrSize = 5;

    levels[4].clickNums[0] = 85;
    levels[4].clickNums[1] = 61;
    levels[4].clickNums[2] = 111;
    levels[4].clickNums[3] = 87;
    levels[4].clickNums[4] = 86;


    levels[5].validLevel = true;
    levels[5].clickArrSize = 8;

    levels[5].clickNums[0] = 85;
    levels[5].clickNums[1] = 61;
    levels[5].clickNums[2] = 111;
    levels[5].clickNums[3] = 87;
    levels[5].clickNums[4] = 86;
    levels[5].clickNums[5] = 89;
    levels[5].clickNums[6] = 114;
    levels[5].clickNums[7] = 115;



    
}