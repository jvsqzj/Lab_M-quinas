
#include <SoftwareSerial.h>

bool on_off;

//Pines
#define rec  0;//Recepción de datos
#define encender 6;
#define leds 5;
#define outputV 4;



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


//Encender
//==============================================================================
if (rec == 'a') {
  on_off=1;
}

else if (rec == 'b') {
  on_off=0;
}

else {
  on_off=on_off;
}

//Velocidades Y Leds
//==============================================================================

if (on_off) {

  digitalWrite(encender, HIGH);


  if (rec == 'l') {
    digitalWrite(leds, HIGH);
  }
  else if (rec == 'o') {
    digitalWrite(leds, LOW);
  }

  switch (rec) {
      case '0':
        analogWrite(outputV, 255);
        break;
      case '5':
        analogWrite(outputV, 255);
        break;
      case '10':
        analogWrite(outputV, 255);
        break;
      case '15':
        analogWrite(outputV, 255);
        break;
      case '20':
        analogWrite(outputV, 255);
        break;
      case '25':
        analogWrite(outputV, 255);
        break;
      case '30':
        analogWrite(outputV, 255);
        break;
      case '35':
        analogWrite(outputV, 255);
        break;
      case '40':
        analogWrite(outputV, 255);
        break;
      case '45':
        analogWrite(outputV, 255);
        break;
      case '50':
        analogWrite(outputV, 255);
        break;
      case '55':
        analogWrite(outputV, 255);
        break;
      case '60':
        analogWrite(outputV, 255);
        break;
      case '65':
        analogWrite(outputV, 255);
        break;
      case '70':
        analogWrite(outputV, 255);
        break;
      case '75':
        analogWrite(outputV, 255);
        break;
      case '80':
        analogWrite(outputV, 255);
        break;
      case '85':
        analogWrite(outputV, 255);
        break;
      case '90':
        analogWrite(outputV, 255);
        break;
      case '100':
        analogWrite(outputV, 255);
        break;
    }

}

else {
  digitalWrite(encender, LOW);
  analogWrite(outputV, 255);
  digitalWrite(leds, LOW);
}
;
}
