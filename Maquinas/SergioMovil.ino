
#include <SoftwareSerial.h>

bool on_off = 0;

//Pines
int rec = '100';//Recepción de datos
#define leds 5
#define outputV 3



void setup() {
//Inicializacion
  pinMode(encender, OUTPUT);
  digitalWrite(encender, LOW);

  pinMode(leds, OUTPUT);
  digitalWrite(leds, LOW);


  Serial.begin(9600); // Default communication rate of the Bluetooth module
}


void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    rec = Serial.read(); // Reads the data from the serial port
 }



//
//==============================================================================
//Serial.println(rec);

  if (rec == 'b') {
    digitalWrite(leds, LOW);
    analogWrite(outputV, 255);
  }
  else if (rec == 'l') {
    digitalWrite(leds, HIGH);
  }

  else if (rec == 'o') {
    digitalWrite(leds, LOW);
  }

  else if (rec == '0') {
   analogWrite(outputV, 255);
  }

  else if (rec == '5') {
   analogWrite(outputV, 255);
  }

  else if (rec == '10') {
   analogWrite(outputV, 255);
  }

  else if (rec == '15') {
   analogWrite(outputV, 255);
  }

  else if (rec == '20') {
   analogWrite(outputV, 255);
  }

  else if (rec == '25') {
   analogWrite(outputV, 255);
  }

  else if (rec == '30') {
   analogWrite(outputV, 255);
  }

  else if (rec == '35') {
   analogWrite(outputV, 255);
  }

  else if (rec == '40') {
   analogWrite(outputV, 255);
  }

  else if (rec == '45') {
   analogWrite(outputV, 45);
  }

  else if (rec == '50') {
   analogWrite(outputV, 45);
  }

  else if (rec == '55') {
   analogWrite(outputV, 45);
  }

  else if (rec == '60') {
   analogWrite(outputV, 30);
  }

  else if (rec == '65') {
   analogWrite(outputV, 30);
  }

  else if (rec == '70') {
   analogWrite(outputV, 30);
  }

  else if (rec == '75') {
   analogWrite(outputV, 15);
  }

  else if (rec == '80') {
   analogWrite(outputV, 15);
  }

  else if (rec == '85') {
   analogWrite(outputV, 15);
  }

  else if (rec == '90') {
   analogWrite(outputV, 0);
  }

  else if (rec == '100') {
   analogWrite(outputV, 0);
  }

;
}
