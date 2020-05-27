#include "lab.h"

void cbHTP(Fl_Button*, void*){
    if(hw) hw->hide();   	//only hide it if it exists
    else hw = makeHTPWindow();
    hw->show();
    iw->hide();
}
