#ifndef ENUMS_TRIGGERBITS_H
#define ENUMS_TRIGGERBITS_H

namespace enums {
    typedef enum  {
        //! definition of  trigger bits

       // definition of  trigger bits   
       b_ACDL =     1,  //  set if cover or side veto, low threshold   
       b_ACDH =     2,   //  cover or side veto, high threshold   
       b_Track=     4,   //  3 consecutive x-y layers hit   
       b_LO_CAL=    8,  //  single log above low threshold   
       b_HI_CAL=   16,   //  3 cal layers in a row above high threshold   
       number_of_trigger_bits = 5 

    } TriggerBits;

}


#endif
