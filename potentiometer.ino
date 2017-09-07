Controlling a servo motor
/****************************************************************
** This is an example with a
** servo motor attached to digital port pin 2 and
** a potmeter attached to ad port pin 0
*****************************************************************/
#include <Servo.h> // library with functions controlling a servo
Servo servo1; // declare an object called 'servo1'
int potpin = 0; // analog pin used to connect the potentiometer
int val; // variable storing potentiometer value
void setup()
{
servo1.attach(2); // attach servo on pin 2 to the servo object
Serial.begin(9600);
}
void loop()
{
val = analogRead(potpin); // reads the value of the potentiometer (value between 0 and
1023)
val = map(val, 0, 1023, 0, 179); // scale it to use it with the servo (value between 0 and 180)
servo1.write(val); // set servo viper position
Serial.println(val);
delay(50); // waits for the servo to get there
} 
