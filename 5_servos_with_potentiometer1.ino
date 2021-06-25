// C++ code
//

#include <Servo.h>
Servo gripper, wrist, elbow, shoulder, base;

int gpin = 5;// analog pin used to connect the potentiometer
int wpin = 4;
int epin = 3;
int spin = 2;
int bpin = 1;

int gval, wval, eval, sval, bval;    // variable to read the value from the analog pin


void setup()
{
  gripper.attach(9);
  wrist.attach(10);  
  elbow.attach(6);
  shoulder.attach(5);
  base.attach(11);
}

void loop()
{
  gval = analogRead(gpin);            // reads the value of potentiometer (value originally btw 0 and 1023)
  gval = map(gval,0 , 1023, 0, 180);     // set to use it w/servo ( and set value btw 0 and 180)
  gripper.write(gval);                  // sets the servo position to the value
  delay(15);                           // waits for the servo to move 
 
  wval = analogRead(wpin);
  wval = map(wval,0 , 1023, 0, 180);
  wrist.write(wval);
  delay(15); 
  
  eval = analogRead(epin);
  eval = map(eval,0 , 1023, 0, 180);
  elbow.write(eval);
  delay(15); 
  
  sval = analogRead(spin);
  sval = map(sval,0 , 1023, 0, 180);
  shoulder.write(sval);
  delay(15);
  
  bval = analogRead(bpin);
  bval = map(bval,0 , 1023, 0, 180);
  base.write(bval);
  delay(15);
}