/*-----------------------------------------------------------------------------------
  Program  : MillisTimer
  Descr    : Library to use the Millis function as a task scheduler.
             (Be careful with using the Delay function in other parts of the program)
  Author   : Fellipe Couto [ http://www.efeitonerd.com.br ]
  GitHub   : https://github.com/fellipecouto/MillisTimer
  Date     : 2020-06-07
  -----------------------------------------------------------------------------------*/
#include "MillisTimer.h"
#include <Arduino.h>

unsigned long _oldTime = 0;
long _time = 0;

MillisTimer::MillisTimer(long delayTime) {
  _time = delayTime;
}

bool MillisTimer::timer() {
  if (millis() - _oldTime >= _time) {
    _oldTime = millis();
    return true;
  }
  return false;
}
