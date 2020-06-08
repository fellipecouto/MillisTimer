/*-----------------------------------------------------------------------------------
  Program  : MillisTimer
  Descr    : Library to use the Millis function as a task scheduler.
             (Be careful with using the Delay function in other parts of the program)
  Author   : Fellipe Couto [ http://www.efeitonerd.com.br ]
  GitHub   : https://github.com/fellipecouto/MillisTimer
  Date     : 2020-06-07
  -----------------------------------------------------------------------------------*/
#ifndef MillisTimer_h
#define MillisTimer_h
#include "Arduino.h"

class MillisTimer {
  public:
    //Initializes the library by passing the delay timer value in milliseconds
    MillisTimer(long delayTime);

    //Returns true every time cycle
    bool timer();
    
  private:
    unsigned long _oldTime = 0;
    long _time = 0;
};
#endif
