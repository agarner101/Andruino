/**
   LED.h
   Operates an LED

   Andrew Garner
   July 10, 2018
*/
#ifndef LED_h
#define LED_h

class LED {
  public:
    int pin;
    LED(int pin) : pin(pin) {

    }
    void write(bool on) {
      int mode = on ? HIGH : LOW;
      digitalWrite(pin, mode);
    }
    void turnOn() {
      write(true);
    }
    void turnOff() {
      write(false);
    }
};

#endif /* LED_h */
