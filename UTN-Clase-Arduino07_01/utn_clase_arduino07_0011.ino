#include <IRremote.h>
//LEDS
int led1= 9;
int led2 = 3;
//
int RECV_PIN = 14;
int IRData = 0;

IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
	Serial.begin(9600);
	irrecv.enableIRIn();
  
  	//LED
  	pinMode(led1, OUTPUT);
  	pinMode(led2, OUTPUT);

}
void loop() {
	if (irrecv.decode(&results))
	{
		IRData = results.value;
		irrecv.resume();
		//Serial.print("Datos: ");
		//Serial.print(IRData, HEX);
		//Serial.print(" {");
		Serial.print(IRData);
		//Serial.println("}");
	}
  	if(IRData == 2295){
      digitalWrite(led1, HIGH);
    }
  else{
       digitalWrite(led1, LOW);
 	 }
  	if(IRData == -30601){
          digitalWrite(led2, HIGH);
  		}
 	 else{
       digitalWrite(led2, LOW);
 	 }


}