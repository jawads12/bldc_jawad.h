#include <bldc_jawad.h>


bldc motor1(18,17,15, 200); //brake, dir, pwm, max_speed




void setup() {
  motor1.setup(); //by default brake

}

void loop() {
  motor1.run(200);
//  motor1.backward(200);

}
