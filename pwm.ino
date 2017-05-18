
/* ------------------------------------------------------------------------------------
  Codigo para ajustar el ciclo de trabajo de acuerdo a la entrada por bluetooth
-------------------------------------------------------------------------------------*/

//      NOTA !!!
//FALTA ajustar las comparaciones

char data = 0; //Variable para guardar datos recibidos
void setup()
{
    Serial.begin(9600); //Sets the baud for serial data transmission
    //revisar aqui para que se ajuste al modulo de Andres, revisar eso...

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
      //
      //-------------------------------------------------

      //         NOTA!!
      //    Se debe revisar luego el la unidad del delay
      //    generar luego un valor CD que se adapte a lo que necesite el motor

      //    SOLO 20 VALORES POSIBLES DE VELOCIDAD, los intervalos son por si las moscas

      if((data >= '1') && (data < '5'))
      // 5% duty cycle
      else if((data >= '5') && (data < '10'))
      // 10% duty cycle

      else if((data >= '10') && (data < '15'))
      // 15% duty cycle

      else if((data >= '15') && (data < '20'))
      // 20% duty cycle

      else if((data >= '20') && (data < '25'))
      // 25% duty cycle

      else if((data >= '25') && (data < '30'))
      // 30% duty cycle

      else if((data >= '30') && (data < '35'))
      // 35% duty cycle

      else if((data >= '35') && (data < '40'))
      // 40% duty cycle

      else if((data >= '40') && (data < '45'))
      // 45% duty cycle

      else if((data >= '45') && (data < '50'))
      // 50% duty cycle

      else if((data >= '50') && (data < '55'))
      // 55% duty cycle

      else if((data >= '55') && (data < '60'))
      // 60% duty cycle

      else if((data >= '60') && (data < '65'))
      // 65% duty cycle

      else if((data >= '65') && (data < '70'))
      // 70% duty cycle

      else if((data >= '70') && (data < '75'))
      // 75% duty cycle

      else if((data >= '75') && (data < '80'))
      // 80% duty cycle

      else if((data >= '80') && (data < '85'))
      // 85% duty cycle

      else if((data >= '85') && (data < '90'))
      // 85% duty cycle

      else if((data >= '90') && (data < '95'))
      // 90% duty cycle

      else if((data >= '95') && (data < '100'))
      // 95% duty cycle

      else if(data == '100')
      // 100% duty cycle

      else if(data == '0')
      // 0% duty cycle
         digitalWrite(13, LOW);   // 0 Hz
   }
}
