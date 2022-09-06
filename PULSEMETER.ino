
/*  
Pulse sensor project

Author: Arduinote
Date  : 06.09.2022

*/


int PulseSensorPurplePin = 0;                        // Pulse Sensor PURPLE WIRE connected to ANALOG PIN 0



int Signal;                                         // holds the incoming raw data. Signal value can range from 0-1024

int OFFSET = 320;                                   // Calibrate this value at your need to ensure Zero Value at no contact to sensor


void setup() {

   Serial.begin(9600);                               // Set's up Serial Communication at certain speed.

}


void loop() {

      Signal = analogRead(PulseSensorPurplePin);      // Read the PulseSensor's value and assign it to Signal variable
                                              
      Serial.print(Signal-OFFSET);                    //  Print the signal value minus offset
      Serial.print(" BPM");                    
      Serial.println(" ");

      delay(10);


}
