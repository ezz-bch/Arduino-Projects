#include <SoftwareSerial.h>
  



int sensorPin = A0;    // select the input pin for the potentiometer


void setup() {
  // put your setup code here, to run once:
 Serial.begin(57600);
 while (!Serial) {;}

pinMode(sensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.print("\t light value = ");
  Serial.println(analogRead(sensorPin));
  delay(100);
}
