
/* ------------------------------------------------------------------------------------ 
  Codigo para ajustar el ciclo de trabajo de acuerdo a la entrada por bluetooth
-------------------------------------------------------------------------------------*/

char data = 0; //Variable for storing received data
void setup()
{
    Serial.begin(9600); //Sets the baud for serial data transmission                               
    pinMode(13, OUTPUT); //Sets digital pin 13 as output pin
}
void loop()
{
   if(Serial.available() > 0)  // Send data only when you receive data:
   {
      data = Serial.read();        //Read the  incoming  data and store it into variable data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n        //New line
      
      if(data == '1')              
         digitalWrite(13, HIGH);   
      else if(data == '0')         
         digitalWrite(13, LOW);    
   }
}
