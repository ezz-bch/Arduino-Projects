#include <SoftwareSerial.h>
  
int lightPin = A0;   

void setup() {
  // put your setup code here, to run once:
 Serial.begin(57600);
 while (!Serial) {;}

pinMode(lightPin, INPUT);
}

void loop() {
   Serial.print("\t light value = ");
    int light = analogRead(lightPin) ;
    Serial.println(light);
  delay(100);
}
