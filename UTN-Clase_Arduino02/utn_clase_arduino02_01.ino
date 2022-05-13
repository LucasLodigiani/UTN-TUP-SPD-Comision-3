int buttonState = 0;
void setup()
{
// Configurar Pin como Entrada
pinMode(2, INPUT);
// Configurar Pines como Salida
pinMode(5, OUTPUT);
pinMode(13, OUTPUT);
pinMode(8, OUTPUT);
pinMode(11, OUTPUT);
}
void loop()
{
// Leer Estado del Puerto de Entrada 2
buttonState = digitalRead(2);
// Actual Segun el Estado de la Lectura
if (buttonState == HIGH){

digitalWrite(5, LOW);
digitalWrite(11, LOW);
digitalWrite(8, LOW);

digitalWrite(13, HIGH);

delay(1000);

digitalWrite(5, HIGH);
  
digitalWrite(13, LOW);
digitalWrite(11, LOW);
digitalWrite(8, LOW);

delay(1000);
} else {
digitalWrite(5, LOW);
digitalWrite(13, LOW);
digitalWrite(8, LOW);
  
digitalWrite(11, HIGH);

delay(1000);
  
digitalWrite(5, LOW);
digitalWrite(13, LOW);
digitalWrite(11, LOW);
  
digitalWrite(8, HIGH);
delay(1000);

}
}