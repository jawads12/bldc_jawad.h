#include <Arduino.h>
#include <bldc_jawad.h>


 //brake_pin(brak), dir_pin(di), pwm_pin(pw) , max_speed(max){}



bldc :: bldc(int brak, int di, int pw, int maxx) :  brake_pin(brak), dir_pin(di), pwm_pin(pw) , max_speed(maxx){}
//{

	//this->brake_pin=brak;
 //	this->dir_pin=di;
   // this->pwm_pin=pw;
  //  this->max_speed=max;
 //}
    void bldc :: setup_(){
        pinMode(brake_pin, OUTPUT);
        pinMode(dir_pin, OUTPUT);
        pinMode(pwm_pin, OUTPUT);
        //digitalWrite(brake_pin, LOW); //light jolena
       // digitalWrite(dir_pin, HIGH);//light jole
         digitalWrite(brake_pin, LOW); //light jolena
       // digitalWrite(dir_pin, LOW);//light jole


    }

    void bldc :: run(int speed){
        if(speed>0){
            if(speed<=max_speed){
        digitalWrite(brake_pin, HIGH);
        digitalWrite(dir_pin, LOW);
       analogWrite(pwm_pin,speed);
       Serial.println("called if");
        }
        }
        else {
            if(speed>=-max_speed){
        digitalWrite(brake_pin, HIGH);
        digitalWrite(dir_pin, HIGH);
       analogWrite(pwm_pin,-speed);
       Serial.println("called else");
        }
        }


    }

    void bldc :: brake(){

        digitalWrite(brake_pin, HIGH);


    }


