/*-----------------------------------------------------------------------------------
  Program  : MillisTimer
  Descr    : Library to use the Millis function as a task scheduler.
             (Be careful with using the Delay function in other parts of the program.
  Author   : Fellipe Couto [ http://www.efeitonerd.com.br ]
  GitHub   : https://github.com/fellipecouto/MillisTimer
  Date     : 2020-06-07
  -----------------------------------------------------------------------------------*/
//Blink Leds

#include <MillisTimer.h> //https://github.com/fellipecouto/MillisTimer [ http://www.efeitonerd.com.br ]

#define LED_1 2
#define LED_2 3

//Initializes the library by passing the delay timer value in milliseconds
MillisTimer timer1(1000);
MillisTimer timer2(200);

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {

  if (timer1.timer()) {
    digitalWrite(LED_1, !digitalRead(LED_1));
  }
  
  if (timer2.timer()) {
    digitalWrite(LED_2, !digitalRead(LED_2));
  }
  
}
