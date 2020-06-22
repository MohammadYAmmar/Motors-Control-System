/*
     Two-servo motor control system 
           
     Task when intren in Smart methods
*/

//Import to using the Arduino Servo Library
#include <Servo.h>

// Create servo objects to control a servo
Servo servo1;  
Servo servo2;

void setup() {
  /*
    min (optional): the pulse width, in microseconds, corresponding to the minimum (0-degree)
    angle on the servo (defaults to 544)

    max (optional): the pulse width, corresponding to the maximum (180-degree) 
    angle on the servo (defaults to 2400)
  */
  
  //Attach the Servo variable to a pin with (pin, min, max)
  servo1.attach(6,600,2300);  
  servo2.attach(5,600,2300); 

}
void loop() {
  // Tell servo to go to a particular angle (Defulat)
  servo1.write(0);  
  servo2.write(0); 
  
  // Delay n milliseconds 
  delay(1000);
  
  servo1.write(90);  
  servo2.write(90);              

  delay(500); 
  
  servo1.write(135);
  servo2.write(135);              

  delay(500);
  
  servo1.write(180);   
  servo2.write(180);              

  delay(1500);      
}
