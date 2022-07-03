// Liberia para LCD
#include <LiquidCrystal.h>
// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;

//SENSOR
int lectura = 0;
int distancia = 0;

void setup() {
  // Inicializamos LCD
  lcd.begin(16, 2);
  //
  lcd.print("Iniciando");
  // Indicamos Linea en LCD
  lcd.setCursor(0, 1);
  lcd.print("Sistema");
  delay(1000);
  // Limpiamos LCD
  lcd.clear();
  delay(1000);

  
}

void loop(){
    // Tomar Lectura
lectura = readUltrasonicDistance(7, 7);
// Calcular Distancia
distancia = 0.01723 * lectura;
  lcd.setCursor(0, 0);
  lcd.print("Lectura: ");
  lcd.setCursor(2, 1);
  lcd.print(distancia);
  contador++;
  delay(1000);
}


long readUltrasonicDistance(int triggerPin, int echoPin)
{
// Inicializar Sensor
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
// Iniciar Sensor en Modo Lectura
pinMode(echoPin, INPUT);
// Retornar Lectura
return pulseIn(echoPin, HIGH);
}