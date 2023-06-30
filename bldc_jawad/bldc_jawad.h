#ifndef bldc_jawad_H
#define bldc_jawad_H
#include <Arduino.h>

class bldc
{
  private:
    const int brake_pin ;
    const int dir_pin ;
    const int pwm_pin ;
    const int max_speed;
  public:
    bldc(int brak, int di, int pw, int max);
    void setup_();
    void run(int speed);
   void brake();


};
#endif

