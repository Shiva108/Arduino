Example
/****************************************************************
** This is an example with a
** servo motor attached to digital port pin 2
** The servo viper is sweeping between its two outer positions
*****************************************************************/
#include <Servo.h> // library with functions controlling a servo
Servo servo1; // declare an object called 'servo1'
void setup()
{
servo1.attach(2); // attach servo on pin 2 to the servo object
Serial.begin(9600);
}
void loop()
{
for(int pos = 0; pos <=179; pos++)
{
servo1.write(pos); // set servo viper position
Serial.println(pos); // write to serial port
delay(15); // waits for the servo to get there
}
for(int pos = 178; pos >=0; pos--)
{
servo1.write(pos); // set servo viper position
Serial.println(pos);
delay(15); // waits for the servo to get there
}
} 
