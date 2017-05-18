#define outputV 5      //Base output freq. of 62,5kHz

float c0, c1, c2, c3;
bool on_off;

void shut_down(){      //Rutina de auto apagado del sistema en caso de tener baja batería

}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  c0 = analogRead(A0)*0.0146;
  c1 = analogRead(A1)*0.0146 - c0;
  c2 = analogRead(A2)*0.0146 - c1 - c0;
  c3 = analogRead(A3)*0.0146 - c2 - c1 - c0;
  on_off = !(c0 <= 3.1 | c1 <= 3.1 | c2 <= 3.1 | c3 <= 3.1);
  if (!on_off){
    analogWrite(outputV, 0);
    shut_down();
  }
  else{
    // definir comportamiento de outputV segun velocidad selecionada    
  }
}
