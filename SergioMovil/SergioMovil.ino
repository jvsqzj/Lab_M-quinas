
#include <SoftwareSerial.h>

bool on_off = 0;

//Pines
int rec = 'z';//Recepción de datos
#define leds 5
#define outputV 3



void setup() {
//Inicializacion


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

  if (rec == 'z') {
    digitalWrite(leds, LOW);
    analogWrite(outputV, 255);
  }
  else if (rec == '1') {
    digitalWrite(leds, HIGH);
  }

  else if (rec == '2') {
    digitalWrite(leds, LOW);
  }

  else if (rec == 'a') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'b') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'c') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'd') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'e') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'f') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'g') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'h') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'i') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'j') {
   analogWrite(outputV, 45);
  }

  else if (rec == 'k') {
   analogWrite(outputV, 97);
  }

  else if (rec == 'l') {
   analogWrite(outputV, 45);
  }

  else if (rec == 'm') {
   analogWrite(outputV, 30);
  }

  else if (rec == 'n') {
   analogWrite(outputV, 30);
  }

  else if (rec == 'o') {
   analogWrite(outputV, 30);
  }

  else if (rec == 'p') {
   analogWrite(outputV, 15);
  }

  else if (rec == 'q') {
   analogWrite(outputV, 15);
  }

  else if (rec == 'r') {
   analogWrite(outputV, 15);
  }

  else if (rec == 's') {
   analogWrite(outputV, 0);
  }

  else if (rec == 't') {
   analogWrite(outputV, 0);
  }

;
}
