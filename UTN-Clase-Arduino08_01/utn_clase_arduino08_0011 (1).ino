// Liberia para LCD
#include <IRremote.h>
#include <LiquidCrystal.h>
// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;
int RECV_PIN = 14;
int IRData = 0;
int suma = 0;
int suma1 = 0;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  
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
  lcd.print("Programa");
  lcd.setCursor(0, 1);
  lcd.print("Sumador");
  delay(1000);
  lcd.clear();
  /
  lcd.print("Contando Numeros");
  lcd.setCursor(0, 1);
  lcd.print("Valor:");*/
}

void loop(){
  /*
  lcd.setCursor(7, 1);
  lcd.print(contador);
  contador++;
  delay(1000);
  */
  if (irrecv.decode(&results))
	{
		IRData = results.value;
		irrecv.resume();
		Serial.print("Datos: ");
		Serial.print(IRData, HEX);
		Serial.print(" {");
		Serial.print(IRData);
		Serial.println("}");
	}
  	if(IRData == 2295){
      suma = 1;
      lcd.setCursor(0, 0);
      lcd.print(1);
    }
  	else if(IRData == -20401){
      lcd.setCursor(2, 0);
      lcd.print("+");
 	}
  	else if(IRData == 18615){
      suma1 = 3;
      lcd.setCursor(4, 0);
      lcd.print(3);
 	}
   	else if(IRData == 28815){
      lcd.setCursor(0, 1);
      lcd.print("Suma = ");
      lcd.setCursor(9, 1);
      lcd.print(suma + suma1);
 	}
  	  	

//-20401 == SUMA
//28815== ST TOTAL
//18615 == 3
}