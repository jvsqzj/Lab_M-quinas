
#include <SoftwareSerial.h>

bool on_off = 0;

//Pines
int rec = 'z';//Recepción de datos
#define leds 5
#define outputV 3

bool arrancar;
bool neon = 0;

void setup() {
//Inicializacion


  pinMode(leds, OUTPUT);
  digitalWrite(leds, LOW);
  arrancar = 1;

  Serial.begin(9600); // Default communication rate of the Bluetooth module
}


void loop() {
  digitalWrite(leds, neon);
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    rec = Serial.read(); // Reads the data from the serial port
 }



//
//==============================================================================
//Serial.println(rec);

  if (rec == 'z') {
    analogWrite(outputV, 255);
    arrancar = 1;
  }
  else if (rec == '1') {
    neon = !neon;
  }

  else if (rec == '2') {
    digitalWrite(leds, LOW);
  }

  else if (rec == 'a') {
   analogWrite(outputV, 255);
  }

  else if (rec == 'b') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
   }
   analogWrite(outputV, 199);
  }

  else if (rec == 'c') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 198);
  }

  else if (rec == 'd') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 195);
  }

  else if (rec == 'e') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 192);
  }

  else if (rec == 'f') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 187);//25
  }

  else if (rec == 'g') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 182);
  }

  else if (rec == 'h') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 174);
  }

  else if (rec == 'i') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 168);
  }

  else if (rec == 'j') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 164);
  }

  else if (rec == 'k') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 160);//50
  }

  else if (rec == 'l') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 140);
  }

  else if (rec == 'm') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 128);
  }

  else if (rec == 'n') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 120);
  }

  else if (rec == 'o') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 115);
  }

  else if (rec == 'p') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 110);//75
  }

  else if (rec == 'q') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 74);
  }

  else if (rec == 'r') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 56);
  }

  else if (rec == 's') {
   if(arrancar == 1){
       analogWrite(outputV, 0);
       delay(100);
       arrancar = 0;
     }
   else {
       arrancar = 0;
     }
   analogWrite(outputV, 38);
  }

  else if (rec == 't') {
   analogWrite(outputV, 0);
  }

;
}
