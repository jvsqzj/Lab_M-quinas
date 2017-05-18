
/* ------------------------------------------------------------------------------------
  Codigo para ajustar el ciclo de trabajo de acuerdo a la entrada por bluetooth
-------------------------------------------------------------------------------------*/

//      NOTA !!!
//FALTA ajustar las comparaciones

char data = 0; //Variable para guardar datos recibidos
void setup()
{
    Serial.begin(9600); //Sets the baud for serial data transmission
    //revisar aqui para que se ajuste al modulo de Andres

    pinMode(13, OUTPUT); //PIN 13 como salida PWM
}

void loop()
{
   if(Serial.available() > 0)  // Revisa si se estan recibiendo datos
   {
      data = Serial.read();        //Guarda los datos recibidos en la variable

      //Solo para revision
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");

      //-------------------------------------------------
      //  Comparaciones de datos para la onda de salida
      //-------------------------------------------------

      //         NOTA!!
      //    Se debe revisar luego el la unidad del delay
      //    generar luego un valor CD que se adapte a lo que necesite el motor

      if((data >= '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 5% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '10') && (data < '15'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 10% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '15') && (data < '20'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 15% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);
      else if((data > '20') && (data < '25'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 20% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '25') && (data < '30'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 25% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '30') && (data < '35'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 30% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '35') && (data < '40'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 35% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '40') && (data < '45'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 40% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '45') && (data < '50'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 45% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);


      else if((data > '50') && (data < '55'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 50% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 55% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 60% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 65% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 70% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 75% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 80% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 85% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 90% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 95% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if((data > '1') && (data < '10'))
        digitalWrite(13, HIGH);
        delayMicroseconds(100); // 100% duty cycle @ 1KHz
        digitalWrite(13, LOW);
        delayMicroseconds(1000 - 100);

      else if(data == '0')
         digitalWrite(13, LOW);   // 0 Hz
   }
}
